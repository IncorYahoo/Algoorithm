//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//using namespace std;
//
//char a[501],b[501];
//int len1,len2,len,a1[501],b1[501],c[501];
//
//int main(){
//	memset(a,0,sizeof(a));memset(b,0,sizeof(b));
//	memset(a1,0,sizeof(a1));memset(b1,0,sizeof(b1));memset(c,0,sizeof(c));
//	cin>>a>>b;
//	len1=strlen(a);len2=strlen(b);
//	for(int i=0;i<len1;i++)a1[len1-i]=a[i]-'0';
//	for(int i=0;i<len2;i++)b1[len2-i]=b[i]-'0';
//	if(len1<len2)len=len2;else len=len1;
//	for(int i=1;i<=len;i++){
//		c[i]+=a1[i]+b1[i];
//		if(c[i]>=10)c[i+1]=1,c[i]-=10;
//		else c[i+1]=0;
//	}
//	if(c[len+1]==1)len++;
//	for(int i=len;i>=1;i--)cout<<c[i];
//	return 0;
//}