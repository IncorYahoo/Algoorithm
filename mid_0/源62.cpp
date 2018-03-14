///*
//作者:incor
//题目:p2283 DOTA
//*/
// 
//#include <iostream>
//using namespace std;
//#include<cstring>
//int main()
//{
//    char a[1000];
//	cin>>a;
//	bool flag=0;
//	int count=0;
//	int max=0;
//
//	for(int i=0;i<=strlen(a);i++)
//	{
//		if(a[i]=='K' && flag)
//			count++;
//		if(a[i]=='K' && !flag)
//			count++,flag=1;
//		if(a[i]=='D' &&  flag)
//		{
//			flag=0;
//			max=count>max?count:max;
//			count=0;
//		}
//		 if(a[i]=='D' &&  !flag)
//			;
//
//
//	}
//	max=count>max?count:max;
//	switch (max)
//	{
//	case 0:
//		cout<<"You are a Foolish Man"<<endl;
//		break;
//	case 1:
//		cout<<"You are a Foolish Man"<<endl;
//		break;
//	case 2:
//		cout<<"You are a Foolish Man"<<endl;
//		break;
//	case 3:
//		cout<<"You are on a Killing Spree"<<endl;
//		break;
//			case 4:
//		cout<<"You are Dominating"<<endl;
//		break;
//			case 5:
//		cout<<"You have a Mega-Kill"<<endl;
//		break;
//			case 6:
//		cout<<"You are Unstoppable"<<endl;
//		break;
//			case 7:
//		cout<<"You are Wicked Sick"<<endl;
//		break;
//			case 8:
//		cout<<"You have a M-m-m-m....Monster Kill"<<endl;
//		break;
//			case 9:
//		cout<<"You are Godlike"<<endl;
//		break;
//	default:
//			cout<<"You are Beyond Godlike (Somebody kill him!)"<<endl;
//		break;
//	}
//	system("pause");
//
//}
// 