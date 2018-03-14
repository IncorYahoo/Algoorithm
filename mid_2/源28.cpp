//#include<iostream>
//using namespace std;
//#define maxn 100007  //元素总个数  
//int Sum[maxn<<2];//Sum求和，开四倍空间
//int A[maxn],n;//存原数组下标[1，n]
//
////PushUp函数更新节点信息，这里是求和
//void PushUp(int rt){Sum[rt]=Sum[rt<<1]+Sum[rt<<1|1];}  
////Build函数建立线段树
//void Build(int l,int r,int rt){ //[l,r]表示当前节点区间，rt表示当前节点的实际存储位置 
//	if(l==r) {//若到达叶节点 
//		Sum[rt]=A[l];//存储A数组的值
//		return;  
//	}  
//	int m=(l+r)>>1;  
//	//左右递归
//	Build(l,m,rt<<1);  
//	Build(m+1,r,rt<<1|1);  
//	//更新信息
//	PushUp(rt);  
//}  
//
//void Update(int L,int C,int l,int r,int rt){//[l,r]表示当前区间，rt是当前节点编号//l,r表示当前节点区间，rt表示当前节点编号  
//	if(l==r){//到达叶节点，修改叶节点的值
//		Sum[rt]+=C;  
//		return;  
//	}  
//	int m=(l+r)>>1;  
//	//根据条件判断往左子树调用还是往右
//	if(L <= m) Update(L,C,l,m,rt<<1);  
//	else       Update(L,C,m+1,r,rt<<1|1);  
//	PushUp(rt);//子节点的信息更新了，所以本节点也要更新信息
//}   
//
//int Query(int L,int R,int l,int r,int rt){//[L,R]表示操作区间，[l,r]表示当前区间，rt:当前节点编号
//	if(L <= l && r <= R){  
//		//在区间内直接返回
//		return Sum[rt];  
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
// 
//int main(){
//	
//	cin>>n;
//	for(int i=1;i<=n;i++)
//		cin>>A[i];
//	Build(
//
//
//
//
//
//    return 0;
//}