//#include<cstdio>
//#include<cstdlib>
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//#define MAXN 101000
//#define MAXT MAXN*4
//#define lch now<<1
//#define rch ((now<<1)+1)
//#define smid ((l+r)>>1)
//int a[MAXN];
//using namespace std;
//struct node
//{
//        int sum;
//        int l,r;
//}sgt[MAXT];
//int read(){
//    register int f=1,x=0;
//    register char ch=getchar();
//    while(ch>'9'||ch<'0'){if(ch=='-') f=-1;ch=getchar();}
//    while(ch>='0'&&ch<='9')x=x*10+ch-'0',ch=getchar();
//    return x*f;
//}
//void build(int now,int l,int r){
//    sgt[now].l=l;
//    sgt[now].r=r;
//    if(l==r) {sgt[now].sum=a[l];return;}
//    build(lch,l,smid);
//    build(rch,smid+1,r);
//    sgt[now].sum=sgt[lch].sum+sgt[rch].sum;
//}
//void modify(int now,int pos,int l,int r,int v){
//    if(l==r){
//        sgt[now].sum+=v;return;
//    }
//    if(pos<=smid)
//       modify(lch,pos,l,smid,v);
//    else 
//       modify(rch,pos,smid+1,r,v);
//    sgt[now].sum=sgt[lch].sum+sgt[rch].sum;
//    
//}
//int query(int now,int l,int r,int x,int y){
//    if(l==x&&r==y) return sgt[now].sum;
//    if(y<=smid) 
//       return query(lch,l,smid,x,y);
//    else if(smid<x)
//       return query(rch,smid+1,r,x,y);
//    else
//       return query(lch,l,smid,x,smid)+query(rch,smid+1,r,smid+1,y);
//}
//int main(){
//    int n=read();
//    for(int i=1;i<=n;i++)
//       a[i]=read();
//    build(1,1,n);
//    int m=read();
//    for(int i=1;i<=m;i++){
//        int opt=read();
//        if(opt==1){
//           int pos=read(),v=read();
//           modify(1,pos,1,n,v);
//        }else{
//            int x=read(),y=read();
//            printf("%d\n",query(1,1,n,x,y));
//        }    
//    }
//    return 0;
//}