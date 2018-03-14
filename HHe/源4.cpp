//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll ;
//typedef double    dl ;
//#define INF 0x7f
//const int maxn =1e5+5; 
//const int mod = 1000000007;  
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
// ll a[maxn],n;
// ll b[maxn];char str[maxn];
//int main()
//{
//     
//    freopen("in","r",stdin);
//  //  freopen("out","w",stdout);
//    cin>>n;
//    f(i,1,n)cin>>a[i];
//    cin>>str+1;
//    f(i,1,n)
//    {
//    	if(str[i]=='0') b[i ]=0;
//    	else b[i]=1;
//    }
//    ll l = - 1e9 ,r =1e9;
//    f(i,5,n)
//    {
//    	 if(b[i-1]==b[i-2]==b[i-3]==b[i-4])
//    	 {
//    	 	if(b[i]==b[i-1])continue;
//    	 	ll res1=a[i],res2=a[i];
//    	 	f(j,i-4,i) res1 =min(res1,a[j]),res2=max(res2,a[j]);
//    	 	if(b[i]==1) l = max(l,res2);
//    	 	else r =min (r,res1);
//    	 }
//    }
//	if(r ==1e9  )r= l+10;
//	else if(l==-1e9) l=r-10;
//    cout<<l+1<<" "<<r-1<<endl;	
//
//    return 0; 
//}
//
