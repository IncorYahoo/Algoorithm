#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
 
const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
 #define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


 
#define low(x) (x)&(-x)
int n,m,op,x,y,a[sz];
int read()
{
    int x= 0;
    bool f = false;
    char c = getchar();
    while(!isdigit(c) && c!='-') c=getchar();
    if(c == '-') f=true, c=getchar();
    while(isdigit(c))
    {
        x= x*10+c-'0';
        c=getchar();
    }
    if(f) x=-x;
    return x;
}
void add(int x,int y)
{
    while(x<=n)
    {
        a[x]+=y;
        x+=low(x);
    }
}
int getsum(int x )
{
    int sum =0;
    while(x)
    {
        sum+=a[x];
        x-=low(x);
    }
    return sum;
}
 int main()
{
    LOACL
    
    n=read(),m=read();
   
 
    REP(i,1,n)
    {
        add(i,read());
    }
  //   REP(i,1,n) DBG(a[i]);
    REP(i,1,m)
    {
        op =read(),x=read(),y=read();
        if(op == 1)  add(x,y);
        else cout<<getsum( y)-getsum(x-1)<<endl;
    } 
    return 0;
}