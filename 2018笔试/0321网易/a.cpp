#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 

const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl;  
 
//数组直接开了
int  a[sz]; 

int main()
{
    LOACL
    int n,m,des;
    int k=1;
    bool flag= true;
    cin>>n>>m;
    while(cin>>a[k]) k++;
    k--;
//    cout<<k<<endl;
    if(k!=(n)*m+1)
    { 
        cout<<"input error"<<endl;
        return 0;
    }
    des = a[(n)*m+1];
    f(i,0,n-1) 
    {
        f(j,2,m) 
        {
             if(a[i*m+j]<0 || a[i*m+j] < a[i*m+j-1]) 
            {
                flag=false;
                break;
            } 
       }
       if(i==0)continue;
        if(a[i*m+1] <a[(i-1)*m+1])
        {
            flag=false;
            break;
         }
    } 
    if(!flag || des<0)
    {

   
        cout<<"input error"<<endl;
        return 0;
    }
    flag=false;    
    f(i,0,n-1)
    {
        if(des<a[i*m+1])
            break;
        f(j,1,m)
        {
            if(a[i*m+j]>des)
            {
                break;
            }
            else if(a[i*m+j]==des)
            {
                flag=true;
                break;
            } 
        }
        if(flag==true)
            break;
    }
    if(flag) cout<<1<<endl;
    else cout<<0<<endl;
            

     


    return 0;
 }   
    
