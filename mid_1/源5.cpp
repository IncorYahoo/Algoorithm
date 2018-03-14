//#include<iostream>
//using namespace std; 
//struct node{
//int ld,rd;
//}
//Node[100];
//int sum = 1;
//void read(struct node *Node,int n)
//{
//	int i,j;
//	for(i = 1;i <= n;i++)
//	{
//		cin>>Node[i].ld>>Node[i].rd;
//		if(Node[i].ld > Node[i].rd)
//		{
//			int c = Node[i].rd;
//			Node[i].rd = Node[i].ld;
//			Node[i].ld = c;
//		}
//	}
//}
//void sort(struct node *Node,int n)
//{
//	int i,j;
//	for(i = 1;i < n;i++)
//	{
//		for(j = i + 1;j <= n;j++)
//		{
//			if(Node[j].rd < Node[i].rd)
//			{
//				struct node t = Node[j];
//				Node[j] = Node[i];
//				Node[i] = t;
//			}
//		}
//	}
//}
//void fun2(struct node * Node,int n)
//{
//	int max = 1;
//	int i;
//	for(i = 2;i <= n;i++)
//	{
//		if(Node[i].ld >= Node[max].rd)
//		{
//			sum++;
//			max = i;
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin>>n;
//	read(Node,n);
//	sort(Node,n);
//	fun2(Node,n);
//	cout<<sum;
//	return 0;
//}