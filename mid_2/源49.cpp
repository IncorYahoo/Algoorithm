//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//typedef struct _Node{
//	int val;
//	struct _Node * next ;
//}node;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//node rafix [10];
//void Init(int * a,int n,node* ph){
//
//		f(i,0,9)
//		rafix[i].val =i,rafix[i].next=NULL;
//		f(i,0,n)
//		ph[i].val =a[i],ph[i].next=NULL;
//
//}
//
//void rafixsort(int * a ,int  n){
//	node * ph =(node*)  malloc(sizeof(node)*(n+1));
//	
//
//	int m=0;
//	f(i,0,n)
//		m=m>a[i]?m:a[i];
//	int tmp =m;
//	int wei = 0;
//	while(tmp!=0)
//	{
//		wei++;
//		tmp/=10;
//	}
//	f(i,1,wei)
//	{	
//		Init(a,n,ph);
//		int t = 1;
//		int x= i;
//		while(x--)t*=10;
//
//		f(i,0,n)
//		{
//			int k= a[i]%(t*10)/t;
//			node * tmp =& rafix[k] ;
//			while(tmp->next)tmp=tmp->next;
//			tmp->next =&ph[i];
//
//		}	
//		int  c= 0;
//		f(i,0,9)
//		{
//				node * tmp = rafix[i].next;
//				while(tmp)
//					a[c++]=tmp->val,tmp=tmp->next;
//		}
//
//	}
//	free  (ph);
//	ph=NULL;
//	
//
//
//
//}
//void print(int *a ,int n){
//	f(i,0,n)
//		printf("%d ",a[i]);
//	printf("\n");
//}
//
//int main(){
//
//
//
//	int a[]={10,12,132,21,55,153,122,1153,1534,4512,123};
//	int n =sizeof(a)/sizeof(a[0]);
//	rafixsort(a,n-1);
//	print(a,n-1);
//
//
//	return 0;
//
//
//}
//
//
