//#include<cstdio>
//#include<cstdlib>
//#define test
//using namespace std;
//struct men{
//	int xu;
//	long fenshu;
//	long shili;
//};
//int com_me(const void* one,const void* two)
//{
//	//这样写 一进sort 就挂了 
//	const men* m1 = *((const men**)one);
//	const men* m2 = *((const men**)two);
///*
//	这样写成功过sort但是一进 fig函数 就挂了 
//	const men* m1 = ((const men*)one);
//	const men* m2 = ((const men*)two);
//
//*/
//	if(m1->fenshu != m2->fenshu)
//		return  -(m1->fenshu - m2->fenshu);
//
//	return m1->xu - m2->xu;
//}
//void fig(men** arr,int n)
//{
//
//	for(int x = 0 ; x < n ; x++)
//	{
//	if(arr[2*x]->shili > arr[2*x+1]->shili)
//		{
//			(arr[2*x]->fenshu)++;	
//		}
//		else
//		{
//			(arr[2*x+1]->fenshu)++;
//		}
//	}
//}
//int main()
//{
//	men** arr;
//	int n,r,q;
//	scanf("%d%d%d",&n,&r,&q);
//	arr = new men*[2*n];
//	for(int x = 0 ; x < 2*n ;++x)
//	{
//		arr[x] = new men();
//		scanf("%d",&arr[x]->fenshu);
//		(*arr[x]).xu = x +1;
//	}
//	for(int x = 0 ; x < 2*n ;++x)
//	{
//		scanf("%d",&arr[x]->shili);
//	}
//
//	qsort(arr,2*n,sizeof(men),com_me);
//
//	for(int x = 0 ;x<r;++x)
//	{
//
//		fig(arr,n);
//		qsort(arr,2*n,sizeof(men),com_me);
//	}
//
//
//	printf("%d\n",arr[q-1]->xu);
//	return 0;
//}