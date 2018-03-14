//#include <iostream>
//using namespace std;
//const int N =10005;
//#define  FO(i,L,R) for(int i=L;i<=R;++i)
//#define  FR(i,L,R) for(int i=L;i>=R;--i)
//int n;
//int a[N][N];
//bool pp [N] ;
//
//
//int main()
//{
//	int sum ;
//	int s ;
//	int k[110];
//
//	cin>>n;
//	FO(i,1,n) FO(j,1,n) cin>>a[i][j];
//
//	memset(pp,false,sizeof(pp));
//	pp[1]=true;
//	FO( i,1,n )
//	{	   
//		int min=10000;
//		int p=0;
//		int mi=0;
//		FO(j,1,i)
//			FO(k,1,n){
//				if(pp[k]==false && min>a[p][k])
//				{
//					min = a[p][k]
//					mi=0;
//				}
//				p=k[p];
//		}
//		sum+=min;
//		pp[mi]=true;
//		k[s]=mi;
//		s=mi;
//	}
//	cout<<sum<<endl;
//	return 0;
//}