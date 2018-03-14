//#include<iostream>
//using namespace std;
//#include<string>
//#include<stack>
//#define  FO(i,L,R) for(int i=L;i<=R;++i)
//#define  FR(i,L,R) for(int i=L;i>=R;--i)
//int main()
//{
//    string a,b;
//    while(cin >> a >> b)
//    {
//		if(a.size()<b.size() || (a.size()==b.size() && a<b))
//		{
//			cout<<"-";
//			swap(a,b);
//		}
//		int lena =a.size();
//		int lenb =b.size();
//		FO(i,0,lena-lenb-1)
//			b='0'+b;
//		int jiewei =0;
//		stack<int >s ;
//		FR(i,lena-1,0)
//		{
//			int v= a[i]-b[i]+jiewei;
//			s.push(v>=0?v:v+10);
//			jiewei=(v>=0?0:-1);
//		}
//		while(s.top()==0)
//			s.pop();
//		while(!s.empty())
//		{
//			cout<<s.top();
//			s.pop();
//		}
//	}
//	return 0;
//}