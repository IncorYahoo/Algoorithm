 #include<bits/stdc++.h>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
          freopen("out","w",stdout); 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)

typedef long long ll; 
const int N = (int)2e5+10;
const int M =N*10;

struct President_Tree
{
    int L,R,sum;
}T[M<<1];
int n,m,T_cnt=1,x,l,r; 
int last[N],top[M],root[N];
void insert(int &now,int x,int l=0,int r=n)
{
    T[T_cnt++]=T[now];now =T_cnt-1;
    T[now].sum++;
    if(l==r)return;
    int mid = (l+r)>>1;
    if(x<=mid) insert(T[now].L,x,l,mid);
    else insert(T[now].R,x,mid+1,r); 
}
int query(int i,int j,int qr,int l=0,int r=n)
{
    if(r<=qr) return T[j].sum-T[i].sum;
    int mid = (l+r)>>1;
    int t =query(T[i].L,T[j].L,qr,l,mid);
    if (mid<qr)t+=query(T[i].R,T[j].R,qr,mid+1,r);
    return t;
}

int main()
{
    LOACL
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>x;
        last[i]=top[x];
        top[x]=i;
    } 

    root[0]=0;
   
    for(int i = 1;i<=n;i++)
    {
        root[i]=root[i-1];
        insert(root[i],last[i]);
    }
  for(int i= 1;i<=n;i++)
        DBG3(T[i].L,T[i].R,T[i].sum);
  
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>l>>r;
        cout<<query(root[l-1],root[r],l-1)<<endl;
    }

 
 
     return 0;
 }
