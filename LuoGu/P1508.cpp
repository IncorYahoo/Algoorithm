 #include<bits/stdc++.h>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
 			freopen("out","w",stdout); 
 
 const int  inf = 987654321;
 const int sz = 1e6 + 5;
 const int mod = 1e9 + 7;
 const int sqrtn = 300; 
 
 #define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
 #define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
 #define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
 #define CLR(arr,val) memset(arr,val,sizeof(arr)) 
 typedef long long ll; 
 int n,m,a[300][300],f[300][300],k;
 int main()
 {
 	LOACL
 	cin>>n>>m;
 	k=m/2+1;
 	f(i,1,n)f(j,1,m)cin>>a[i][j];
 	f(i,1,n)f(j,1,m)
 	{
 		f[i][j]=max(max(f[i-1][j],f[i-1][j-1]),f[i-1][j+1])+a[i][j];
 	}
 	cout<<max(max(f[n][k],f[n][k-1]),f[n][k+1])<<endl;
 	return 0;
 }