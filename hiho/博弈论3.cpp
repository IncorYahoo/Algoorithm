 #include<bits/stdc++.h>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
             freopen("out","w",stdout); 
 
 const int  inf = 987654321;
 const int sz = 1e6 + 5;
 const int mod = 1e9 + 7;
 const int sqrtn = 300; 
 
 #define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
 #define f(i,l,r) for(int i=l;i<=r;++i)
 #define g(i,l,r) for(int i=l;i>=r;--i)
 #define CLR(arr,val) memset(arr,val,sizeof(arr)) 
 typedef long long ll; 
 
 int main()
 {
     LOACL
    int n ,x,sg=0;
    cin>>n;
    f(i,1,n)
    {
        cin>>x;
        if(((x+x&1)>>1)&1) sg^=x;
        else sg^= (x&1)?x+1:x-1;
    }
    if(sg)cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
     return 0;
    
 }