//#include<iostream>
//using namespace std;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//const int N =100010;
//int a[N],sum[N<<2];
//void pushup(int rt ){
//	sum[rt]=sum[rt<<1]+sum[rt<<1|1];
//}
//void build(int rt ,int l ,int r){
//	if(l==r){
//		sum[rt]=a[l];return ;
//	}
//	int m = (l+r)>>1;
//	build(rt<<1,l,m);
//	build(rt<<1|1,m+1,r);
//	pushup(rt);
//}
//void update(int rt ,int l,int r,int pos,int c){
//	if(l==r){
//		sum[rt]+=c; return ;
//	}
//	int m= (l+r)>>1;
//
//	if(pos <=m)    update(rt<<1,l,m,pos,c);
//	else   update(rt<<1|1,m+1,r,pos,c);
//	pushup(rt);
//}
//int query(int rt ,int l ,int r,int a,int b){
//	if(l==a && r==b) return sum[rt];
//	int m =(l+r)>>1;
// 
//	if(b<=m) return query(rt<<1,l,m,a,b);
//	else if(a> m) return query(rt<<1|1,m+1,r,a,b);
//	else return query(rt<<1,l,m,a,m) + query(rt<<1|1,m+1,r,m+1,b);
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false); 
//	int n,opt,x,y,m;
//	cin>>n;
//	f(i,1,n)cin>>a[i];
//	build(1,1,n);
//	cin>>m;
//	f(i,1,m){
//		cin>>opt>>x>>y;
//		switch(opt){
//		case 1:
//			update(1,1,n,x,y);
//			break;
//		case 2:
//			cout<<query(1,1,n,x,y)<<endl;
//			break;
//		}
//	}
//	return 0;
//}
