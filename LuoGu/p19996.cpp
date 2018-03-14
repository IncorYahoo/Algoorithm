#include<bits/stdc++.h>
using namespace std ;	
int n,m,s;
bool a[105];
int main()
{

	scanf("%d%d",&n,&m);
	int s=0 ;
	for(int j=0;j<n;j++)
 	{
 		for(int i=0;i<m;i++)
 		{
 			 if(++s>n)s=1;if(a[s])i--;
 		}
 		cout<<s<<" ";
 		a[s]=1;
 	} 
	return 0;
}
