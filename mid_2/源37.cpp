//
//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//#define ls t<<1
//#define rs t<<1|1
//#define midt (tr[t].l+tr[t].r)>>1
//using namespace std;
//const int maxn=111111;
//int a[maxn];
//int d[maxn*20],lon;
//const int inf=1111111111;
//struct
//{
//    int l,r;
//    int ll,rr;
//}tr[maxn*4];
//
//int maketree(int t,int l,int r)
//{
//    tr[t].l=l;
//    tr[t].r=r;
//    if(l==r)
//    {
//        d[++lon]=a[l];
//        tr[t].ll=lon;
//        tr[t].rr=lon;
//        return(0);
//    }
//    int mid=midt;
//    maketree(ls,l,mid);
//    maketree(rs,mid+1,r);
//    tr[t].ll=lon+1;
//    int l1=tr[ls].ll,r1=tr[ls].rr;
//    int l2=tr[rs].ll,r2=tr[rs].rr;
//    while(l1<=r1&&l2<=r2)
//    {
//        if(d[l1]<d[l2])
//        d[++lon]=d[l1++];
//        else
//        d[++lon]=d[l2++];
//    }
//    while(l1<=r1)
//    d[++lon]=d[l1++];
//    while(l2<=r2)
//    d[++lon]=d[l2++];
//    tr[t].rr=lon;
//}
//
//int query(int l,int r,int tmp)
//{
//    if(tmp>=d[r]) return(r-l+1);
//    if(tmp<d[l])  return(0);
//    int ll=l,rr=r;
//    while(ll<rr)
//    {
//        int mid=(ll+rr)>>1;
//        if(d[mid]>tmp)
//        rr=mid;
//        else
//        ll=mid+1;
//    }
//    return(ll-l);
//}
//
//int query(int t,int l,int r,int tmp)
//{
//
//    if(l<=tr[t].l&&r>=tr[t].r)
//    {
//        return(query(tr[t].ll,tr[t].rr,tmp));
//    }
//    int mid=midt,ret=0;
//    if(l<=mid) ret+=query(ls,l,r,tmp);
//    if(mid+1<=r) ret+=query(rs,l,r,tmp);
//    return(ret);
//}
//
//int main()
//{
//    int n,k;
//    scanf("%d %d",&n,&k);
//    for(int i=1;i<=n;i++)
//    scanf("%d",&a[i]);
//    maketree(1,1,n);
//    int l,r,tmp;
//    for(int i=1;i<=k;i++)
//    {
//        int l,r,tmp;
//        scanf("%d %d %d",&l,&r,&tmp);
//        int sm=-inf,bg=inf;
//        while(sm<bg)
//        {
//            int mid=(sm+bg)>>1;
//            int t1=query(1,l,r,mid);
//            if(t1<tmp)
//            sm=mid+1;
//            else
//            bg=mid;
//        }
//        printf("%d\n",sm);
//    }
//    return 0;
//}
