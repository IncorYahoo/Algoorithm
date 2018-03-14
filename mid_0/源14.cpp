//
//#include<iostream>
//
//#include<cstdio>
//
//#include<vector>
//
//#include<map>
//#include<string>
//using namespace std;
//
//map<string,int>cur;
//
//vector<string>word;
//
//int main(void){
//
//	int n;
//
//	cin>>n;
//
//	for(int i=0;i<n;i++){
//
//		string s;
//
//		cin>>s;
//
//		word.push_back(s);
//
//		cur[s]=0;
//
//	}
//
//	//	for(int i=0;i<word.size();i++)cout<<word[i];
//
//	for(int i=0;i<n;i++){
//
//		string s;
//
//		cin>>s;
//
//		int n,m;
//
//		cin>>n>>m;
//
//		for(int j=0;j<m;j++)
//		{
//
//			string ss;
//
//			cin>>ss;
//
//			cur[ss]+=n/m;
//
//		}
//
//		if(m!=0)cur[s]-=(n/m)*m;
//
//	}
//
//		for(int i=0;i<word.size();i++) 
//
//			cout<<word[i]<<" "<<cur[word[i]]<<endl;
// 
//
//}