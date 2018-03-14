//#include<iostream>
//using namespace std;
// #include<string.h>
//  #include<stdio.h>
// 
//
//int main()
//{
//	 char s[100];
//	 int i=0,l=0,k=0,t=0,x=0,y=0;
//	char c;
//
//	 cin>>s;
//	 l=strlen(s);
//	 while ( i <l)
//	 {
//		 if(s[i]=='=')
//		 {
//			 i++;
//			 t=1;
//		 }
//		  if(s[i]=='-')
//		 {
//			 i++;
//			 k=1;
//		 }
//		 if(s[i]=='+') i++;
//		 int f=0;
//		 while(s[i]>='0' &&s[i]<='9')
//			f=f*10+s[i++]-'0';
//		 if(s[i]>='a'&&s[i]<='z')
//		 {
//			 c=s[i++];
//			 if((k+t)%2==0) x+=f;
//			 else x-= f;
//			 k=0;
//		 }
//		 else{
//		  if((k+t)%2==0) y-=f;
//			 else  
//				 y+= f;
//			 k=0;
//		 }
//		  
//	 } 
//	 double ans = y*1.000/x;
//	 printf("%c=%.3lf\n",c,ans);
////	 cout << setprecision(3);
////
////cout.setf(ios::fixed, ios::floatfield);
////
////cout << var << "=" << x << endl;
//	return 0;
//}