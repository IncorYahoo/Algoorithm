///*
//作者:incor
//题目:p2475 Ry哥还是任意
//*/
// 
//#include <iostream>
//using namespace std;
//int main()
//{
//  int n;
//  int count =0 ;
//  cin>>n;
//  char a,b;
//
//  while(n--)
//  {
//	  cin>>a>>b;
//	  switch (a)
//	  {
//	  case 'S':
//		{
//			if(b=='S')
//				;
//			else if(b=='J')
//				count--;
//			else if(b=='B')
//				count++;
//			
//		}
//		  break;
//	  case 'J':
//		  	{
//			if(b=='S')
//				count++;
//			else if(b=='J');
//			else if(b=='B')
//				count--;
//		}
//		  break;
//	  case 'B':
//		  	{
//			if(b=='S')
//				count--;
//			else if(b=='J')
//				count++;
//			else if(b=='B');
//	
//		}
//		  break;
//	  default:
//		  break;
//	  }
//  }
//  if(count>0)cout<<"RY win"<<endl;
//  else if(count==0)cout<<"RY=ry"<<endl;
//  else cout<<"ry win"<<endl;
//}
// 