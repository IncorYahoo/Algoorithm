///*
//作者:incor
//题目:p1461 手机
//*/
//// 1 2 abc 3 def
////4 ghi 5 jkl 6 mno
////7 pqrs 8 tuv 9 wxyz
////* 0 #
//
//
//
//#include <iostream>
//using namespace std;
//#include<string>
//
//char a[1000];
//
//void init()
//{
//a['a']=1;
//a['d']=1;
//a['g']=1;
//a['j']=1;
//a['m']=1;
//a['p']=1;
//a['t']=1;
//a['w']=1;
//a['*']=1;
//a['0']=1;
//a['#']=1;
//a['b']=2;
//a['e']=2;
//a['h']=2;
//a['k']=2;
//a['n']=2;
//a['q']=2;
//a['u']=2;
//a['x']=2;
//a['c']=3;
//a['f']=3;
//a['i']=3;
//a['l']=3;
//a['o']=3;
//a['r']=3;
//a['v']=3;
//a['y']=3;
//a['s']=4;
//a['z']=4;
//a[' ']=1;
//
//}
//int ss(char c)
//{
//	return a[c];
//}
//int main()
//{
//	init();
//
//   
//	cin.getline(a,1000);
//	int sum=0;
//	for(int i=0;i<strlen(a);i++)
//	{
//		sum+=ss(a[i]); 
//	}
//	cout<<sum<<endl;
//	system("pause");
//
//}
// 