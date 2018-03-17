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
 int n,m;
 int a[201][201];
 int cnt0,cnt1 ;
 int calc(int x,int y)
 {
 	int count=0;
 	f(i,-1,1) if(x+i>=1&&x+i<=n)
 	f(j,-1,1) if(y+j>=1&&y+j<=m &&a[x+i][y+j] <0)
 	count++;
 	return count;
 }
 bool  isnxt(int x,int y,int i,int j)
 {
 	if((x-i)>1||(x-i)<-1||(y- j)>1||(y- j)<-1) return  false;
 	return true ;
 }
 
  
  bool check(int x,int y,int c,int d)
 {
 	f(i,-1,1) if(x+i>=1&&x+i<=n)
 	f(j,-1,1) if(y+j>=1&&y+j<=m &&a[x+i][y+j] < 0 &&!isnxt(x+i,y+j,c,d))
 	return false ;
 	return true;
 }
 void run(int x,int y)
 {
 	f(i,-1,1) if(x+i>=1&&x+i<=n)
 	f(j,-1,1) if(y+j>=1&&y+j<=m &&a[x+i][y+j] == -1)
 	a[x+i][y+j] =-2;
 } 
 void run2(int x,int y)
 {
 	if(calc(x,y)==a[x][y])
 	f(i,-1,1) if(x+i>=1&&x+i<=n)
 	f(j,-1,1) if(y+j>=1&&y+j<=m &&a[x+i][y+j] <0 )
 	a[x+i][y+j] =-3;
 } 
 void run3(int x,int y)
 {
 	f(c,-2,2)  if(x+c>=1&&x+c<=n)
	f(d,-2,2) 

	if(y+d>=1&&y+d<=m && (c||d)&&a[x+c][y+d]>=0 && check(x+c,y+d,x,y))
	{
		if(a[x][y]-a[x+c][y+d] == calc(x,y)-calc(x+c,y+d))
		{
				f(i,-1,1) if(x+i>=1&&x+i<=n)
 				f(j,-1,1) if(y+j>=1&&y+j<=m && a[x+i][y+j]<0 &&!isnxt(x+i,y+j,x+c,y+d))
 				a[x+i][y+j] =-3;
		}
	}
 }
  
 int main()
 {
 	LOACL
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		cin>>n>>m;
 		f(i,1,n) f(j,1,m) cin>>a[i][j];
 		f(i,1,n) f(j,1,m)
 		{
 			if(!a[i][j])run(i,j);
 			if(a[i][j]>0) run2(i,j),run3(i,j);
 		}
 		cnt0=cnt1=0;
 		f(i,1,n) f(j,1,m)
 		{
 			if(a[i][j]==-2) cnt0++;
 			if(a[i][j]==-3) cnt1++; 
 		}
 		cout<<cnt1<<" "<<cnt0<<endl;
 	}	 
 	return 0;
 }
