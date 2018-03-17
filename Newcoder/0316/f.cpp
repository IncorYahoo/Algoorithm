 #include<bits/stdc++.h>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
             freopen("out","w",stdout); 
 
 const int  inf = 0x3f3f3f3f;
 const int sz = 1e6 + 5;
 const int mod = 1e9 + 7;
 const int sqrtn = 300; 
 
 #define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
 #define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
 #define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
 #define CLR(arr,val) memset(arr,val,sizeof(arr)) 
 typedef long long ll; 
 int n,m,mx[sz],mn[sz],ans[sz],cnt[10];
 const int M=100001;
 struct node
 {
    int x, y;
 }p[sz];
 void init()
 {
    CLR(mx,0);
    CLR(mn,inf);
 }
 int main()
 {
    LOACL
    cin>>m>>n;
    f(i,1,n)
        cin>>p[i].x>>p[i].y;

    init();
    f(i,1,n) 
    {
        mx[p[i].x] = max(p[i].y,mx[p[i].x]);
        mn[p[i].x] = min(p[i].y,mn[p[i].x]); 
    } 
    f(i,1,n)
    {
        if(p[i].y==mx[p[i].x] &&p[i].y==mn[p[i].x])
            ans[i]+=0;
        else if ( p[i].y==mx[p[i].x]  || p[i].y==mn[p[i].x])
             ans[i]+=1; 
         else   ans[i]+=2;
    }

    init();
     f(i,1,n) 
    {
        mx[p[i].y] = max(p[i].x,mx[p[i].y]);
        mn[p[i].y] = min(p[i].x,mn[p[i].y]); 
    } 
    f(i,1,n)
    {
        if(p[i].x==mx[p[i].y] &&p[i].x==mn[p[i].y])
            ans[i]+=0;
        else if (p[i].x==mx[p[i].y]  || p[i].x==mn[p[i].y])
             ans[i]+=1; 
         else   ans[i]+=2;
    }

    init();
    f(i,1,n)
    {
        int k = p[i].x-p[i].y;
        k+=M;    
        mx[k]=max(p[i].y,mx[k]);
        mn[k]=min(p[i].y,mn[k]);
    }
    f(i,1,n)
    {
        int k = p[i].x-p[i].y;
        k+=M;  
        if(p[i].y==mx[k] && p[i].y==mn[k])
            ans[i]+=0;
        else if(p[i].y==mx[k] || p[i].y==mn[k])
            ans[i]+=1;
        else ans[i]+=2; 
    }

    init();
    f(i,1,n)
    {
        int k = p[i].x+p[i].y;
        
        mx[k]=max(p[i].x,mx[k]);
        mn[k]=min(p[i].x,mn[k]);
    }
    f(i,1,n)
    {
        int k = p[i].x+p[i].y;  
        if(p[i].x==mx[k] && p[i].x==mn[k])
            ans[i]+=0;
        else if(p[i].x==mx[k] || p[i].x==mn[k])
            ans[i]+=1;
        else ans[i]+=2; 
    }

    f(i,1,n) cnt[ans[i]]++;
    f(i,0,7) cout<<cnt[i]<<" ";
    cout<<cnt[8]<<endl; 
    return 0;
}
 
