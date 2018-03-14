////#include <iostream>  
////#include <algorithm>  
////#include <cstdio>  
////#include <cstring>  
////#include <string>  
////#include <cstdlib>  
////#define LL long long  
////using namespace std;  
////int v[5],n,g[5][50];  
////LL f[5][50];  
////int main()  
////{  
////	scanf("%d",&n);  
////	for (int i=1;i<=6;i++)  
////	{  
////		char s[5];  
////		scanf("%s",s);  
////		int from=s[0]-'A'+1,to=s[1]-'A'+1;  
////		if (v[from]) continue;  
////		v[from]=1;  
////		g[from][1]=to,f[from][1]=1;  
////	}  
////	for (int i=2;i<=n;i++)  
////		for (int j=1;j<=3;j++)  
////		{  
////			int y=g[j][i-1];  
////			int z=6-y-j;  
////			f[j][i]=f[j][i-1]+1;  
////			if (z==g[y][i-1])  
////			{  
////				f[j][i]+=f[y][i-1];  
////				g[j][i]=z;  
////			}  
////			else  
////			{  
////				f[j][i]+=f[y][i-1]+1+f[j][i-1];  
////				g[j][i]=y;  
////			}  
////		}  
////		cout<<f[1][n]<<endl;  
////		return 0;  
////}  