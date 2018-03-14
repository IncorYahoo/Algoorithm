//#include<iostream>
//#include<string.h>
//#include<queue>
//using namespace std;
//struct edge
//{
//	int u;
//	int v;
//	int w; 
//};//创建结构体存储边的关系
//edge e[100];
//int n,m;
//int f[100]={0},sum=0,count1=0;//并查集需要用到变量
//
////并查集寻找祖先
//int getf(int v)
//{
//	if(f[v]==v)
//		return v;
//	else
//	{
//		//路径压缩
//		f[v]=getf(f[v]);
//		return f[v] ;
//	}
//}
//int merge(int v,int u)
//{
//	int t1,t2;
//	t1=getf(v);
//	t2=getf(u);
//	if(t1!=t2)          //判断两个点是否在一个集合中
//	{
//		f[t2]=t1;
//		return 1;
//	}
//	return 0;   
//}
//int  cmp( edge a,edge b)
//{
//	return a.w>b.w?0:1;
//}
//int main()
//{
//	int i;
//	int money;
//	cin>>money>>m>>n; 
//	for(i=1;i<=m;i++)
//		cin>>e[i].u>>e[i].v>>e[i].w;
//
//	for(i=1;i<=n;i++)
//		f[i]=i; 
//
//	sort(e,e+m+1,cmp);
//
//	for(i=1;i<=m;i++)
//	{
//		 
//		if(merge(e[i].u,e[i].v))
//		{
//			sum=sum+e[ai].w;
//			count1++;
//		}
//
//		if(count1==n-1)break;
//	} 
//
//	if(sum<=money)
//		cout<<"Yes";
//	else
//		cout<<"No";
//	return 0;
//}