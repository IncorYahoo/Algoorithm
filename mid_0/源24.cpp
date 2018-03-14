///*
//作者:incor
//题目:p1426 找零钱的程序
//*/
// 
//#include <iostream>
//#include<map>
//using namespace std;
//#include<iterator>
//
//int main()
//{ 
//	int n,m;
//	cin>>n>>m;
//	int h=n-m;
//	int tmp=h;
//
//	cout<<h<<endl;
//	map<int,int> m_map; 
//	if(tmp/100 !=0)	 { m_map[100] = tmp/100; 	 tmp-=100*m_map[100];	}
//	if(tmp/50 !=0)	 { m_map[50]  = tmp/50 ; 	 tmp-=50*m_map[50];		}
//	if(tmp/20 !=0)	 { m_map[20]  = tmp/20 ;	 tmp-=20*m_map[20];		}
//	if(tmp/10 !=0)	 { m_map[10]  = tmp/10 ;	 tmp-=10*m_map[10];		}
//	if(tmp/5 !=0)	 { m_map[5 ]  = tmp/5  ;	 tmp-=5 *m_map[5 ];		}
//	if(tmp/1 !=0)    { m_map[1 ]  = tmp/1  ;	 tmp-=1 *m_map[1 ];		}
//	map<int,int>::iterator it = m_map.end();
//	while(it != m_map.begin())
//	{
//		--it;
//		cout<<it->first<<"*"<<it->second;
//		if(it != m_map.begin())cout<<"+";
//	}
//	cout<<"="<<h<<endl;
//	system("pause"); 
//} 