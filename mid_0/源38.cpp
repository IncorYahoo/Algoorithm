///*
//作者:incor
//题目:p1447 取出整数的一部分
//*/
// 
//#include <iostream>
//using namespace std;
//#include<vector>
//#include<cmath>
//int main()
//{
//    int n,m;
//	cin>>n>>m;
//	//int s =1;
//	//while(m--) n/=10,s++ ;
//	//if(n>0) cout<<n<<endl;
//	//else
//	//	cout<<"Error"<<endl;
//	vector<int> v;
//	do{
//	 v.push_back(n%10);
//	}while((n/=10)!=0);
//	if(v.size()<abs(m))	cout<<"Error"<<endl;
//	else if(m>0) {
//		for(int i=v.size();m-->0;i--)
//			cout<<v[i-1];
//		 cout<<endl;
//	}
//	else{
//		for(int i=v.size()-abs(m) ; i>=0 ;i++)
//			cout<<v[i];
//		 cout<<endl;
//	}
//}
// 