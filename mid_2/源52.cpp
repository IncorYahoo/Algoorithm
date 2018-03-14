//
////#include<iostream>
//using namespace std;
//#define INF -1000
//const int N =205; 
//typedef long long ll ;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//struct s 
//{
//	char C ;
//	int f;
//	int n ;
//
//}s[11]; 
//int d[11][11][N];
//int x,y,z;
// 
//int func(int a,int b,int c){
//	if(c< 0 ) return -100;
//	if(b== z &&c>0) return 0;
//	if(a>x) return -100;
//	if(d[a][b][c]!=-100)return d[a][b][c];
//	
//	d[a][b][c]=max(func(a+1,b,c), func(a+1,b+1,c-s[a].n)+s[a].f);
//	return d[a][b][c];
//}
//int main(){
//	cin>>x>>z>>y;
//	f(i,1, x) cin>>s[i].C>>s[i].n;
//	f(i,1, x) 
//		switch(s[i].C)
//		{
//			case 'G':
//				s[i].f=3;
//				break;
//			case 'M':
//				s[i].f=2;
//				break;
//			case 'B':
//				s[i].f=-2;
//				break;
//		}
//	f(i,0,10)
//		f(j,0,10)
//			f(k,0,N-1)
//				d[i][j][k]=-100;
//	int ans = func(1,0,y);
//	cout<<ans+100  << endl;
//
//
//	return 0;
//
//}