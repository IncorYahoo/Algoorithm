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
#define mid (l+r)/2
const int   sz = 200010;
int n,m,l,r,k,q,cnt;
int a[sz],b[sz],T[sz];
int sum[sz<<5],L[sz<<5],R[sz<<5];
int build(int l,int r)
{
	int  rt=++cnt;
	sum[rt] = 0;
	if(l<r)
	{
		L[rt] = build(l,mid);
		R[rt] = build(mid+1,r);
	}
	return rt;
}
int update(int pre,int l,int r ,int x )
{
	int rt = ++ cnt;
    L[rt] = L[pre]; R[rt] = R[pre]; sum[rt] = sum[pre]+1;
    if (l < r){
        if (x <= mid) L[rt] = update(L[pre], l, mid, x);
        else R[rt] = update(R[pre], mid+1, r, x);
    }
    return rt;
}


inline int query(int u, int v, int l, int r, int k)
{
    if (l >= r) return l;
    int x = sum[L[v]] - sum[L[u]];
    if (x >= k) return query(L[u], L[v], l, mid, k);
    else return query(R[u], R[v], mid+1, r, k-x);
}




int main()
{
    LOACL
   	cin>>n>>m;
   	REP(i,1,n) 
   	{
   		cin>>a[i];
   		b[i]=a[i];
   	}
   	sort(b+1,b+n+1);
    q = unique(b+1,b+n+1)-b-1;
    T[0]=build(1,q);
    REP(i,1,n)
    {
    	int t = lower_bound(b+1,b+1+q,a[i])-b;
    	T[i] = update(T[i-1], 1, q, t);
    }

   	REP(i,1,m)
   	{
   		cin>>l>>r>>k;
   		int t = query(T[l-1],T[r],1,q,k);
   		cout<<b[t]<<endl;
   	}


    return 0;
}