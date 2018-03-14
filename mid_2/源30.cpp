//#include<iostream>
//using namespace std;
//const int N= 1005;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//int n,a[N];
//int sum[N<<2];
//
//
////
////一个整数N，接下来是n行n个整数，表示格子中原来的整数。接下一个正整数m
////	，再接下来有m行，表示m个询问，第一个整数表示询问代号，询问代号1表示增加，
////	后面的两个数x和A表示给位置X上的数值增加A，询问代号2表示区间求和，
////	后面两个整数表示a和b，表示要求[a,b]之间的区间
//void pushup(int rt){
//	sum[rt]=sum[rt<<1]+sum[rt<<1|1];
//}
//void build(int l,int r,int rt){
//	if(l==r) {
//		sum[rt] = a[l];
//		return ;
//	}
//	int m= (l+r)>>1;
//	build(l,m,rt<<1);
//	build(m+1,r,rt<<1|1);
//	pushup(rt);
//}
//
//void Update(int L,int C,int l,int r,int rt){//[l,r]表示当前区间，rt是当前节点编号//l,r表示当前节点区间，rt表示当前节点编号  
//	if(l==r){//到达叶节点，修改叶节点的值
//		sum[rt]+=C;  
//		return;  
//	}  
//	int m=(l+r)>>1;  
//	//根据条件判断往左子树调用还是往右
//	if(L <= m) Update(L,C,l,m,rt<<1);  
//	else       Update(L,C,m+1,r,rt<<1|1);  
//	pushup(rt);//子节点的信息更新了，所以本节点也要更新信息
//}  
//int Query(int L,int R,int l,int r,int rt){//[L,R]表示操作区间，[l,r]表示当前区间，rt:当前节点编号
//	if(L <= l && r <= R){  
//		//在区间内直接返回
//		return sum[rt];  
//	}  
//	int m=(l+r)>>1;  
//	//左子区间:[l,m] 右子区间：[m+1,r]  求和区间:[L,R]
//	//累加答案
//	int ANS=0;  
//	if(L <= m) ANS+=Query(L,R,l,m,rt<<1);//左子区间与[L,R]有重叠，递归
//	if(R >  m) ANS+=Query(L,R,m+1,r,rt<<1|1); //右子区间与[L,R]有重叠，递归
//	return ANS;  
//}   
//
//int main()
//{
//	cin>>n;
//	f(i,1,n)cin>>a[i];
//	build(1,n,1);
//
//	int m;
//	int x,l,r;
//	cin>>m;
//	f(i,1,m){
//		cin>>x>>l>>r;
//		switch(x)
//		{
//		case 1:
//			Update(l,r,1,n,1);
//			break;
//		case 2:
//			cout<<Query(1,n,l,r,1)<<endl;
//			break;
//		}
//	}
//	return 0;
//
//}