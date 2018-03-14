//#include<iostream>
//using namespace std;
//#define N 100010
//#define lc k<<1
//#define rc k<<1|1
//#define mid (l+r>>1)
//int tmp[N],a[N<<2];
//void build(int k,int l,int r){
//    if(l==r){
//        a[k]=tmp[l];return ;
//    }
//    build(lc,l,mid);
//    build(rc,mid+1,r);
//    a[k]=a[lc]+a[rc];
//}
//void add(int k,int l,int r,int pos,int y){
//    if(l==r){
//        a[k]+=y;return ;
//    }
//    if(pos<=mid) 
//        add(lc,l,mid,pos,y);
//    else 
//        add(rc,mid+1,r,pos,y);
//    a[k]=a[lc]+a[rc];
//}
//int query(int k,int l,int r,int x,int y){
//    if(l==x&&r==y) return a[k];
//    if(y<=mid) return query(lc,l,mid,x,y);
//    else if(x>mid) return query(rc,mid+1,r,x,y);
//    else return query(lc,l,mid,x,mid)+query(rc,mid+1,r,mid+1,y);
//}
//int main(){
//    int n,m,opt,x,y;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++)
//        scanf("%d",tmp+i);
//    build(1,1,n);
//    scanf("%d",&m);
//    for(int i=1;i<=m;i++){
//        scanf("%d%d%d",&opt,&x,&y);
//        if(opt==1) add(1,1,n,x,y);
//        else printf("%d\n",query(1,1,n,x,y));
//    }
//    return 0;
//}