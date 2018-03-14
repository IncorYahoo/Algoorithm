//#include<iostream>
//#include<algorithm>
//#include<iomanip>
//using namespace std;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//const int N = 1e5 + 10;
//
//struct node{
//	int fa,ch[2];
//	bool reverse,is_root; 
//}T[N];
//
//int getson(int x){
//	return x==T[T[x].fa].ch[1];
//}
//void pushreverse(int x)
//{
//	if(!x) return ;
//	swap(T[x].ch[0],T[x].ch[1]);
//	T[x].reverse^=1;
//}
//void pushdown(int x )
//{
//	if(T[x].reverse)
//	{
//		pushreverse(T[x].ch[0]);
//		pushreverse(T[x].ch[1]);
//		T[x].reverse =false;
//	}
//}
//void rotate(int x){
//	if(T[x].is_root)return ;
//	int k =getson(x),fa=T[x].fa;
//	int fafa = T[fa].fa;
//	pushdown(fa);	pushdown(x);
//	T[fa].ch[k]=T[x].ch[k^1];
//	if(T[x].ch[k^1])t[t[x].ch[k^1]].fa=fa;
//
// 
//
//}
//
// 
//int main(){
//	double   a= 10.0;
//	int c=20;
//	cout<<fixed<<setprecision(c)<<a<<endl;
//	return 0;
//
//}