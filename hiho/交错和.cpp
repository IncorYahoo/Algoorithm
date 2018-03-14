#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)

 struct node
 {
    ll s,n; // s交错和 ，n 代表个数 
    node()
    {
        s=0;n=-1;
    }
 };
 node dp[21][20][400];
 ll base[21];
 int bits[21];
 void init()
 {
    node t; 
    f(i,0,20)f(j,0,19)f(k,0,399)dp[i][j][k]=t;
    base[1]=1;
    f(i,2,20)base[i]=base[i-1]*10%mod; 
 }
node dfs(int len,int dig,bool bz,bool limit,int sum)
{
    node t;
    t.s=0;t.n=0;
    //边界
    if(len<=0 || len>=20||dig<0||dig>9||sum<-200||sum>=200 )
        return t;

    //返回结束位置 
    if(!limit  && dp[len][dig+(bz?0:10)][sum+200].n!=-1)
        return dp[len][dig+(bz?0:10)][sum+200];
    if(len==1)
    {
        if(dig!=sum)
            return t;
        t.n=1,t.s=sum;
        return t;
    }
    //枚举
    int end =limit?bits[len-2]:9;
    int newsum = dig -sum;
    node tmp;
    f(j,0,end)
    {
       if(bz)
            tmp = dfs(len-1,j,j==0,limit&&(j==end),sum);
        else tmp = dfs(len-1,j,false,limit&&(j==end),newsum);
        t.n+=tmp.n;
         //计算满足条件的长度为 len 的data[len]所有数的和， tmp 是长度为 i-1的data[len-1]所有数的和
         //每一个： data[len] = dig * base[len] + data[len-1]  且共有n个
         //t.s = t.s + tmp.n * (dig * base[len]) + tmp.s 增加 %mod 就得到下面的结果
        t.s =  ((t.s + tmp.s) % mod + ((tmp.n * dig) % mod * base[len]) % mod) % mod;
    }

    if(!limit)
        dp[len][dig+(bz?0:10)][sum+200]=t;
    return t;

}



 ll slove(ll n ,ll s )
 {
    if(n<=0)return 0;
    int l =0;
    f(i,0,20)
    bits[i]=0;
    while(n)
    {
        bits[l++]=n%10;
        n/=10;
    }
    return dfs(l+1,0,true,true,s).s;
 }
int main()
{
     
    freopen("in","r",stdin);
    init();
    ll l,r,s;
    cin>>l>>r>>s;
    cout<<(slove(r,s)-slove(l-1,s)+mod)%mod<<endl;
    cout<<"hello"<<endl;

    return 0; 
}

