//#include<iostream>
//using namespace std;
//struct Node
//{
//	int l,r;
//}Node[101];
//int n;int ans=1;
//void aa()
//{
//	int l,r;
//
//	for(int i=1;i<=n;++i)
//	{
//		cin>>l>>r;
//		Node[i].l =l<r?l:r;
//		Node[i].r =l>r?l:r;
//	}
//}
//void sort()
//{
//	int l,r;
//
//	for(int i=1;i<=n;++i)
//	{
//		for(int j=i+1;j<=n;++j)
//		{
//			if(Node[i].r>Node[j].r)
//			{
//				l=Node[i].l;
//				r=Node[i].r;
//				Node[i].l=Node[j].l;
//				Node[i].r=Node[j].r;
//				Node[j].l=l;
//				Node[j].r=r;
//			}
//		}
//	}
//}
//void tanxin()
//{
//	int max=1;
//
//	for(int i=2;i<=n;++i)
//	{
//		 if(Node[i].l >= Node[max].r)
//		 {
//			 max =i;
//			 ans++;
//		 }
//	}
//}
//int main()
//{
//	cin>>n;
//	aa();
//	sort();
//	tanxin();
//	cout<<ans<<endl;
//}