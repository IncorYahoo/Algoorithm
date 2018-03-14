//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct _Node{
//	int val;
//	struct _Node * next ;
//}node;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//void docksort2(node * n){
//	if(n==NULL||n->next==NULL)return ;
//	node * ph = n;
//	node* p = ph;
//	int  m =ph->val;
//	while(ph )
//	{
//		if(ph->val < m)
//		{
//			m=ph->val;
//			p = ph;
//		}
//		ph=ph->next;
//	}
//	
//	p->val = n->val;
//	n->val = m;
//	docksort2(n->next);	
//}
//
//void docksort(int * a ,int  n){
//	node * no_node = (node*)malloc(sizeof(node)*(n+1));
//	f(i,0,n) no_node[i].val=a[i],no_node[i].next=NULL;
//	int m =0;
//	f(i,0,n) m=m>(a[i]/100)?m:(a[i]/100);
//	node * ph = (node*)malloc(sizeof(node)* (m+1));
//	f(i,0,m) ph[i].val =i,ph[i].next=NULL;
//	f(i,0,n){
//		int num =a[i]/100;
//		node * tmp = &ph[num];
//		while(tmp->next)tmp=tmp->next;
//		 tmp->next = &no_node[i];
//	}
//	f(i,0,m)
//		docksort2(ph[i].next);
//	int c=0;
//	node * tt ;
//	f(i,0,m)
//	{
//		tt =ph[i].next;
//		while(tt)
//		{
//			a[c++]=tt->val;
//			tt =tt->next;
//		}
//	}		
//}
// void print(int *a ,int n){
//	 f(i,0,n)
//		 printf("%d ",a[i]);
//	 printf("\n");
// }
//
//int main(){


			
//	int a[]={10,12,132,21,55,153,122};
//	int n =sizeof(a)/sizeof(a[0]);
//	docksort(a,n-1);
//	print(a,n-1);
//
//
// 	return 0;
//
//
//}
//
//
