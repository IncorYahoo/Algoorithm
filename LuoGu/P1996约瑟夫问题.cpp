#include<bits/stdc++.h>
using namespace std ;	
int n,m,s;
int a[105];
int mian()
{
	scanf("%d%d",&n,&m);
	int i=0;
	while(s!=n)
	{
		for(int k=1;k<=m;k++)
		{
			while(!a[i])
			{
				i++;
				if(i>n)i=1;
			}
		} 
		a[i]=++s; 
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
}
