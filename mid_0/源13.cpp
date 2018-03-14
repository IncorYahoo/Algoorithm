//#include<iostream>
//
//#include<map>
//#include<algorithm>
//#include<string>
//#include<iterator>
//#include<vector>
//using namespace std;
//
//
//int main()
//{
//	int n ,tmp;
//	cin>>n;
//	int num,l;
//
//	map<string,int> m;
//	vector<string> v;
//	
//	string str;
//	tmp=n;
//	while(tmp--)
//	{
//		cin>>str;
//		v.push_back(str);
//		m[str]=0;
//	}
//	tmp=n;
//	while(tmp--)
//	{
//		cin>>str;
//		cin>>num>>l;
//		m[str]-=num;
//		if(l==0)continue;
//
//		int s =num/l;
//
//		while(l--)
//		{
//			cin>>str;
//			m[str]+=s;
//		}
//		if(l!=0)m[str]-=(num/l)*l;
//
//	}
//	for(int i=0;i<v.size();i++)
//		cout<<v[i]<<" "<<m[v[i]]<<endl;
//  
//	return 0;
//}
// 