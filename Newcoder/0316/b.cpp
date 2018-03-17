#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
            freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 
#define pb push_back
#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long LL; 

inline void read(LL& x){int f=1;char c;while(((c=getchar())<'0'||c>'9')&&c!='-');c=='-'?(f=-1,x=0):(x=c-'0');while((c=getchar())>='0'&&c<='9')x=x*10+c-'0';x*=f;}
inline void read(int& x){LL t;read(t);x=t;}
 
vector<LL> ans;
 
 
void p(LL s){
    LL t1=s*10+4;
    if(t1>LL(4444444444ll)) return;
    ans.pb(t1);
    LL t2=s*10+7;
    if(t2>LL(444444444)) return;
    ans.pb(t2);
    p(t1);p(t2);
}
int main()
{
     p(0);sort(ans.begin(),ans.end());
    LL l,r;read(l);read(r);
    LL as=0;
    while(l<=r){
        int q=int(lower_bound(ans.begin(),ans.end(),l)-ans.begin());
        as+=1LL*(min(r,ans[q])-l+1)*ans[q];
        l=min(r,ans[q])+1;
    }
    printf("%lld\n",as);
    return 0;
     
    return 0;
}