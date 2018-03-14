//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
// 
//struct EDGE{int x,y,value;};//边表 
//bool cmp(EDGE A,EDGE B){return A.value<B.value;}
//EDGE e[100001]; 
//int m,tot=0,father[100001],n,p,q;//father[]是并查集的父亲节点 
//long long ans=0;
//int find(int nn)
//{
//	if(father[nn]!=nn)  return father[nn]=find(father[nn]);
//	return father[nn];
//}
//void kruskal()
//{
//	sort(e+1,e+m+1,cmp);
//	tot=0;
//	for(int i=1;i<=m;i++)
//	{
//		p=find(e[i].x);
//		q=find(e[i].y);
//		if(p!=q)  {father[q]=p;ans+=e[i].value;tot++;}
//		if(tot==n-1) {printf("%lld",ans);return;} 
//	}
//	return;
//}
//int main()
//{
//	cin>>n>>m;
//	ans=0;
//	memset(&e,0,sizeof(e));
//	for(int i=1;i<=n;i++)  father[i]=i;
//	for(int i=1;i<=m;i++)
//		cin>>e[i].x  >>e[i].y  >>e[i].value;
// 
//	kruskal();
//	return 0;
//}