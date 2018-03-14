//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//const int N =501; 
//typedef long long ll ;
//
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//const int N = 500;  
//      
//int uset[N];  
//      
//       
//      
//void makeSet(int n) {   
//   f(i,0,n)uset[i]=-1;     
//}   
//int find(int x) {   
//    int p = x , t;  
//      
//    while (uset[p] >= 0) p = uset[p];  
//      
//    while (x != p) {   
//        t = uset[x];   
//        uset[x] = p;   
//        x = t ;   
//    }   
//    return x;  
//      
//}  
//      
//void unionSet(int x, int y) {  
//      
//    if ((x = find(x)) == (y = find(y))) return;  
//      
//    if (uset[x] < uset[y]) {  
//      
//        uset[x] += uset[y];  
//      
//        uset[y] = x;  
//      
//    } else {  
//      
//        uset[y] += uset[x];  
//      
//        uset[x] = y;  
//      
//    }  
//      
//}  
// 
// 
//int main()
//{
//	int n,m,x,y ; 
//	while(~scanf("%d%d",&n,&m))
//	{
//		makeSet(n);
//	 
//		f(i,1,m)
//		{ 
//			cin>>x>>y;
//			 unionSet(x,y);
//		}
//		if(find(n)==1)
//			cout<<"Yes"<<endl;
//		else cout<<"No"<<endl;
//		
//	}
//}