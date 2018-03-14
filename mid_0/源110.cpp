#include"stdc++.h"
#include<algorithm>
 using namespace  std;


 
vector<int> a ,b  ;
int l, r, k1, k2;
int ss()
{
	b.clear();

	for(int i=l;i<=r;i++)
		b.push_back(a[i]);
	sort(b.begin(),b.end());
	for(int i= 0;i<=b.size()-1;i++)
	{
		int count=0;
		for(int j=0;j<=b.size()-1;j++)
		{
			if(b[i]==b[j])
				count++;
		}
		if(count == k1)
			k2--;
		if(k2==0) 
			return b[i];

	}


}
int main()
{
	int n ,i ,m;
	int tmp;scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&tmp),a.push_back(tmp);
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d%d%d%d",&l,&r,&k1,&k2);
	 
		printf("%d\n",ss());

	 
	}

 

}