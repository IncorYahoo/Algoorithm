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
////һ������N����������n��n����������ʾ������ԭ��������������һ��������m
////	���ٽ�������m�У���ʾm��ѯ�ʣ���һ��������ʾѯ�ʴ��ţ�ѯ�ʴ���1��ʾ���ӣ�
////	�����������x��A��ʾ��λ��X�ϵ���ֵ����A��ѯ�ʴ���2��ʾ������ͣ�
////	��������������ʾa��b����ʾҪ��[a,b]֮�������
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
//void Update(int L,int C,int l,int r,int rt){//[l,r]��ʾ��ǰ���䣬rt�ǵ�ǰ�ڵ���//l,r��ʾ��ǰ�ڵ����䣬rt��ʾ��ǰ�ڵ���  
//	if(l==r){//����Ҷ�ڵ㣬�޸�Ҷ�ڵ��ֵ
//		sum[rt]+=C;  
//		return;  
//	}  
//	int m=(l+r)>>1;  
//	//���������ж������������û�������
//	if(L <= m) Update(L,C,l,m,rt<<1);  
//	else       Update(L,C,m+1,r,rt<<1|1);  
//	pushup(rt);//�ӽڵ����Ϣ�����ˣ����Ա��ڵ�ҲҪ������Ϣ
//}  
//int Query(int L,int R,int l,int r,int rt){//[L,R]��ʾ�������䣬[l,r]��ʾ��ǰ���䣬rt:��ǰ�ڵ���
//	if(L <= l && r <= R){  
//		//��������ֱ�ӷ���
//		return sum[rt];  
//	}  
//	int m=(l+r)>>1;  
//	//��������:[l,m] �������䣺[m+1,r]  �������:[L,R]
//	//�ۼӴ�
//	int ANS=0;  
//	if(L <= m) ANS+=Query(L,R,l,m,rt<<1);//����������[L,R]���ص����ݹ�
//	if(R >  m) ANS+=Query(L,R,m+1,r,rt<<1|1); //����������[L,R]���ص����ݹ�
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