//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//const int N = 1e5 + 10;
//int cnt;
//int n,m;
////��Ӧ���� ��ɢ���id �ʹ�С˳��
//int ranArr[N];
//struct Node{
//	int l,r;
//	int sum;
//}Tree[N<<5];
//int root[N];//�洢�߶����ĸ��ڵ�
//
///* �洢ԭ���ݽṹ�� xԭ���� id ��ɢ��֮ǰ����λ��*/
//struct v{   
//	int x;
//	int id;
//}value[N];
//bool cmp(v l ,v r){
//	return l.x<r.x;
//}
//
//void init(){
//	cnt =1;
//	root[0]=0;
//	Tree[0].l=Tree[0].r=Tree[0].sum=0;
//}
////update(ranArr[i], root[i], 1, n);
//void update(int num,int& rt ,int l,int r){
//	Tree[cnt++]=Tree[rt];
//	rt=cnt-1;
//	Tree[rt].sum++;
//	if(l==r) return ;
//	int m=(l+r)>>1;
//	if(num< m )	update(num,Tree[rt].l,1,m);
//	else	update(num,Tree[rt].r,m|1,r); 
//}
////query(root[l-1],root[r],k,i,n)
//int query(int i,int j,int k,int l,int r){
//	int range = Tree[Tree[j].l].sum -Tree[Tree[i].l].sum ;
//	if(l==r) return l;
//	int m = (l+r)>>1;
//	if(k<=range) return query(Tree[i].l,Tree[j].l,k,i,m);
//	else return query(Tree[i].r,Tree[j].r,k-range,m|1,r);
//}
//
//int main(){
//	cin>>n>>m;
//	//���� ���� 
//	f(i,1,n) cin>>value[i].x, value[i].id =i;
//	//��ɢ������
//	sort(value+1,value+n+1,cmp);
//	
//	f(i,1,n)ranArr[value[i].id]=i;
// 
//	//��̬����
//	init();
//	f(i,1,n)
//	{
//		root[i]=root[i-1];
//		update(ranArr[i], root[i], 1, n);
//	}
//
//	//ֻ���в�ѯ
//	int l,r,k;
//	f(i,1,m)
//	{
//		cin>>l>>r>>k;
//		cout<<value[query(root[l-1],root[r],k,i,n)].x<<endl;
//	}
//
//
//	return 0;
//}