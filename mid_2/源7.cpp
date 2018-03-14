//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//using namespace std;
//
//char a[501],b[501];
//int len1,len2,len,a1[501],b1[501],c[1005];
//
//int main(){
//	memset(a,0,sizeof(a));memset(b,0,sizeof(b));
//	memset(a1,0,sizeof(a1));memset(b1,0,sizeof(b1));memset(c,0,sizeof(c));
//	cin>>a>>b;
//	len1=strlen(a);len2=strlen(b);
//	for(int i=0;i<len1;i++)a1[len1-i]=a[i]-'0';
//	for(int i=0;i<len2;i++)b1[len2-i]=b[i]-'0';
//	for(int i=1;i<=len1;i++)
//		for(int j=1;j<=len2;j++){
//			c[i+j-1] += a1[i]*b1[j];
//			if(c[i+j-1]>9) c[i+j] =c[i+j-1]/10,c[i+j-1]%=10;
//		}
//  
//	if(c[len1+len2]!=0)cout<<c[len1+len2];
//	for(int i=len1+len2-1;i>=1;i--)cout<<c[i];
//	return 0;
//}