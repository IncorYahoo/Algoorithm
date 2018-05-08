 #include<bits/stdc++.h>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
          freopen("out","w",stdout); 
 #define FASTIO  ios::sync_with_stdio(false);
 #define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";
 
 
 const int   inf = 987654321;
 const int    sz = (int)1e6 + 5;
 const int   mod = (int)1e9 + 7;
 const int sqrtn = 300; 
 
 //#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
 #define CLR(arr,val) memset(arr,val,sizeof(arr)) 
 #define DBG(x) cout<<(#x)<<"="<<x<<endl
 #define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
 #define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl
 
 #define FOR(i, a, b)  for(int i=(a); i<(b); i++)
 #define REP(i, a, b)  for(int i=(a); i<=(b); i++)
 #define DOWN(i, a, b) for(int i=(a); i>=(b); i--)
 
 
 #define all(x) x.begin(),x.end()
 #define low(x) (x)&(-x)
 #define pb push_back
 typedef long long ll; 
 typedef double dl; 
 int t,n,a[sz];
void ff()
{
	if(n<=0)cout<<0<<endl;
	else if(n==1) cout<<a[1]<<endl;
	int excl =0,incl =a[1];
	int excl_new;
	
	 
	REP(i,2,n)
	{
		 
		excl_new = (excl>incl)?excl:incl;
		incl = excl +a[i];
		excl = excl_new; 
	} 
	
	cout<<(incl>excl?incl:excl)<<endl;

}
  
 int main()
 {
     LOACL
 	cin>>t;
 	while(t--)
 	{
 		cin>>n;
 		REP(i,1,n)cin>>a[i];
 		ff();	
 	}




     return 0;
 }