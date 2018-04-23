#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";


const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

//#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 

int n,tot;
char a[200],b[200],c[200];
int main()
{
  //  LOACL
    FASTIO
    cin>>n;
    while(n--)
    {
    	cin>>a>>b;
    	CLR(c,0);
  //  	DBG2(a,b);

    	 
    	int lena = strlen(a);
    	int lenb = strlen(b);
    	//	DBG2(lena,lenb);
    	while(lena!=-1 && lenb!=-1)
    	{
    		int tmp  = a[lena--]-'0'+b[lenb--]-'0';
    		if(tmp>=10)
    		{
    			c[tot+1]='1';
    			tmp-=10;
    		}
    		if(c[tot]=='1')
    			c[tot]=c[tot]+tmp;
    		else  c[tot]=c[tot]+tmp+'0';
			tot++;
    	}
    

    	while(lena!=-1)
    	{
    		int tmp  = a[lena--]-'0'+(c[tot]=='1'?1:0) ;
    		if(tmp>=10)
    		{
    			c[tot+1]='1';
    			tmp-=10;
    		}
    		if(c[tot]=='1')
    			c[tot]=c[tot]+tmp;
    		else  c[tot]=c[tot]+tmp+'0';
			tot++;

    	}
    	while(lenb!=-1)
    	{
    		int tmp  = b[lenb--]-'0'+(c[tot]=='1'?1:0);
    		if(tmp>=10)
    		{
    			c[tot+1]='1';
    			tmp-=10;
    		}
    		if(c[tot]=='1')
    			c[tot]=c[tot]+tmp;
    		else  c[tot]=c[tot]+tmp+'0';
			tot++;
    	}
    	//int lenc = strlen(c);
    //	DBG(tot);
    	DOWN(i,tot-1,1)
    		cout<<(int)(c[i]-'0');
    	cout<<endl;
    	

    }
 
    return 0;
}