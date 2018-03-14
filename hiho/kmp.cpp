#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e6+5; 

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
char str[maxn],str2[maxn];
int nxt[maxn];
 void getnxt()
 {
 	memset(nxt,-1,sizeof(nxt));
 	int j=0,k=-1;
 	int len1= strlen(str);
 	while(j<len1)
 	{
 		if(k==-1 || str[j]==str[k])
 			nxt[++j]=++k;
 		else k=nxt[k];
 	}
 }
int kmp()
{
	int ans=0;
	getnxt();
 //	f(i,0,strlen(str))
 //	cout<<nxt[i]<<" ";
 //	cout<<endl;
	
	int len2= strlen(str2);
 	int len1= strlen(str);
 
  

 
	int i,j;
       i = j = 0;  
    while(i < len2) 
    {         
        if(j == -1 || str2[i] == str[j]) ++i, ++j;  
        else j = nxt[j];  
        if(j == len1) ans++;  
    }  
	return ans;
}



int main()
{
     
    freopen("in","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
    	cin>>str>>str2;
    	cout<<kmp()<<endl;
    }

     

    return 0; 
}


