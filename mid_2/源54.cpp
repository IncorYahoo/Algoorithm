//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//int x,y,z,r,ans=-0x7fffffff;
//bool v[11]; 
//struct {
//	char c ;
//	int w,p;
//}s[12];
//void dfs(int now,int tot,int pride,int time){
//	if(tot>=z) ans=max(ans,pride);
//	if(tot==x) return;
//	if(now==x) return;
//	f(i,now+1,x){
//		if(time>=s[i].p&&!v[i]){
//			dfs(i,tot+1,pride+s[i].w,time-s[i].p);
//			v[i]=false;
//		} 
//	}
//}
//int main(){
//	cin>>x>>z>>y;
//	f(i,1,x){
//		cin>>s[i].c>>s[i].p;
//		switch (s[i].c)
//		{
//		case 'G':     
//			s[i].w=3;	break;
//		case 'M':   
//			s[i].w=2;	break;
//		case 'B':      
//			s[i].w=-2;	break;
//		default:
//			break;
//		} 
//	}
//	dfs(0,0,0,y);
//	if(ans==-0x7fffffff) cout<<-1<<endl;
//	else cout<<ans<<endl;
//} 