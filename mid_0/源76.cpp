//#include<iostream>
//using namespace std;	
//int t;
//int m,n,r,c,k;
//bool ss (  )
//{
//	if(r-1 <k && r!=1) return false ;
//	if(c-1 <k && c!=1) return false ;
//	if(n-r <k && r!=n) return false ;
//	if(m-c <k && c!=m) return false ;
//	else return true;
//}
//int main()
//{
//	 
//
//	cin>>t;
//	while(t--)
//	{
//		cin>> n >>m>>r>>c>>k;
// 
//		/* if( ( r-1 >=k || (r-1<k&&r==1) ) &&  ( n-r >=k || (n-r<k&&r==n) )&&  (c-1 >=k || (c-1<k&&c==1) )&&  ( m-c >=k || (m-c<k &&c==m)) )*/
//		if(ss( ))
//		{
//			long long  r1 = (r-1)%k==0? (r-1)/k:(r-1)/k+1;
//			long long r2 = (n-r)%k==0? (n-r)/k:(n-r)/k+1;
//			long long w1 = (c-1)%k==0? (c-1)/k:(c-1)/k+1;
//			long long w2 = (m-c)%k==0? (m-c)/k:(m-c)/k+1;
//			cout<<(r1+r2)*(w1+w2)<<endl;
//		}
//		 else cout<<"-1"<<endl;
//			
//	}
//
//
//	system("pause");
//	return 0;
//}