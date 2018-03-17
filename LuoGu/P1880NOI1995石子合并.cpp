 #include<bits/stdc++.h>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
       freopen("out","w",stdout); 
 
 const int  inf = 987654321;
 const int sz = 1e6 + 5;
 const int mod = 1e9 + 7;
 const int sqrtn = 600; 
 
 #define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
 #define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
 #define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
 #define CLR(arr,val) memset(arr,val,sizeof(arr)) 
 typedef long long ll; 
 int n,a[300],f1[300][300],f2[300][300],sum[300];
 int main()
 {
   LOACL
    cin>>n;
    f(i,1,n)
    {
      cin>>a[i];
      a[i+n]=a[i];
    }
    f(i,1,n<<1)
    {
      sum[i]=sum[i-1]+a[i];
    }

    g(i,n<<1,1)
    {
      f(j,i+1,min(n+n,i+n-1))
      {
        f2[i][j]=inf;
        f(k,i,j-1)
        {
             f1[i][j]=max(f1[i][j],f1[i][k]+f1[k+1][j]+sum[j]-sum[i-1]);
             f2[i][j]=min(f2[i][j],f2[i][k]+f2[k+1][j]+sum[j]-sum[i-1]);
        }
      }
    }
   // f2 min 
    int maxn = -inf,minn = inf;
    f(i,1,n)
    {
      maxn =max(maxn,f1[i][i+n-1]);
      minn =min(minn,f2[i][i+n-1]); 
    }
      cout  <<minn<<endl;

    cout  <<maxn<<endl;
  
   return 0;
 }
