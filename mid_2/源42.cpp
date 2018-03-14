//#include<iostream>
//#include<string>
// 
//using namespace std;
//#define INF 0x7f
//const int N =10005;
//#define  f(i,L,R) for(int i=L;i<=R;++i)
//#define  g(i,L,R) for(int i=L;i>=R;--i)
//char a[1000],b[1000];
//int main(){
//	int n;
//	cin>>a;
//	n=strlen(a);
//	int l=-1 ,r =-1;
//	f(i,0,n-1)
//	{
//		l=-1,r =n;
//		if(a[i]!='#'){
//			g(j,i-1,0)
//			{
//				if(a[j]!='#')
//				{
//					l=j;break;
//				}
//			}
//			f(j,i+1,n-1)
//			{
//				if(a[j]!='#')
//				{
//
//					r=j;break;
//				}
//			}
//			if(l!=-1)
//			{
//				if(a[i] == a[l])
//				{
//					if(a[i]=='o')
//						a[l]='#',a[i]='O';
//					else a[l]='#',a[i]='#';
//						i--;continue;
//				}
//			
//			}
//			if(r!=n){
//				if(a[i] == a[r])
//				{
//					if(a[i]=='o')
//						a[r]='#',a[i]='O';
//					else a[r]='#',a[i]='#';
//						i--;continue;
//				}
//			}
//
//		}
//
//	}
//	 
//	int c=0;
//	f(i,0,n-1)if(a[i]!='#')b[c++]= a[i];
//	f(i,0,c-1)
//	cout<<b[i];
//	return 0;
//}