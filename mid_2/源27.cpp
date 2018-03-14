//#include<cstdio>
//#include<cstring>
//#include<iostream>
//using namespace std;
////---------------------LCT----------------------
//const int M=3e6+10;
//int n,m,fa[M],st[M],c[M][2];
//bool rev[M];
//int tag[M];
//int val[M];
//bool isroot(int x){
//    return c[fa[x]][0]!=x&&c[fa[x]][1]!=x;
//}
///*void update(int x){
//    val[x]=val[c[x][0]]+val[c[x][1]]+1;
//}*/
//void opera(int x,int v){
//    if(x) tag[x]+=v,val[x]+=v;
//}
//void rotate(int x){
//    int y=fa[x],z=fa[y],l,r;
//    l=(c[y][1]==x);r=l^1;
//    if(!isroot(y)) c[z][c[z][1]==y]=x;
//    fa[x]=z;fa[y]=x;fa[c[x][r]]=y;
//    c[y][l]=c[x][r];c[x][r]=y;
//    //update(y);update(x);
//}
//#define l c[x][0]
//#define r c[x][1]
//void pushdown(int x){
//    /*if(rev[x]){
//        rev[x]^=1;rev[l]^=1;rev[r]^=1;
//        swap(l,r);
//    }*/
//    if(tag[x]){
//        opera(l,tag[x]);
//        opera(r,tag[x]);
//        tag[x]=0;
//    }
//}
//void splay(int x){
//    int top=0;st[++top]=x;
//    for(int i=x;!isroot(i);i=fa[i]) st[++top]=fa[i];
//    for(int i=top;i;i--) pushdown(st[i]);
//    while(!isroot(x)){
//        int y=fa[x],z=fa[y];
//        if(!isroot(y)){
//            if((c[y][0]==x)^(c[z][0]==y)) rotate(x);
//            else rotate(y);
//        }
//        rotate(x);
//    }
//}
//void access(int x){
//    for(int t=0;x;x=fa[x]) splay(x),c[x][1]=t,t=x;
//}
///*void evert(int x){
//    access(x);splay(x);rev[x]^=1;
//}*/
//void link(int x,int y){
//    fa[x]=y;access(y);splay(y);
//    //evert(x);fa[x]=y;splay(x);
//    opera(y,val[x]);
//}
///*void cut(int x,int y){
//    evert(x);
//    access(y);splay(y);
//    opera(y,-val[y]);
//    c[y][0]=fa[c[y][0]]=0;//!!!
//}*/
//void cut(int x){
//    access(x);splay(x);opera(l,-val[x]);
//    c[x][0]=fa[c[x][0]]=0;
//}
//int find(int x){
//    access(x);splay(x);
//    for(;l;x=l);
//    return x;
//}
//#undef l
//#undef r
////---------------------SAM----------------------
//const int N=1.2e6+5;
//int p,q,np,nq;
//int last,cnt,len,mask;
//int l[N],par[N],tr[N][26];
//int siz[N];char s[N];
//inline void extend(int c){
//    p=last;np=last=++cnt;val[np]=1;l[np]=l[p]+1;
//    for(;p&&!tr[p][c];tr[p][c]=np,p=par[p]);
//    if(!p) par[np]=1,link(np,1);
//    else{
//        q=tr[p][c];
//        if(l[p]+1==l[q]) par[np]=q,link(np,q);
//        else{
//            nq=++cnt;l[nq]=l[p]+1;cut(q);
//            memcpy(tr[nq],tr[q],sizeof tr[q]);
//            par[nq]=par[q];
//            link(nq,par[q]);
////            siz[nq]=siz[q];
//            par[np]=par[q]=nq;
//            link(np,nq);link(q,nq);
//            for(;tr[p][c]==q;tr[p][c]=nq,p=par[p]);
//        }
//    }
////    for(;np;np=par[np]) siz[np]++;
//}
//inline void build(){
//    for(int i=0;i<len;i++) extend(s[i]-'A');
//}
//inline int query(){
//    int p=1;
//    for(int i=0,c;i<len;i++){
//        c=s[i]-'A';
//        if(!tr[p][c]) return 0;
//        p=tr[p][c];
//    }
//    splay(p);
//    mask^=val[p];
//    return val[p];
//}
//inline void decode(int mask){
//    len=strlen(s);
//    for(int i=0;i<len;i++){
//        mask=(mask*131+i)%len;
//        swap(s[mask],s[i]);
//    }
//}
//int main(){
//    last=++cnt;
//    scanf("%d",&m);scanf("%s",s);len=strlen(s);
//    build();
//    for(char op[9];m--;){
//        scanf("%s%s",op,s);decode(mask);
//        if(op[0]=='A') 
//            build();
//        else
//            printf("%d\n",query());
//    }
//    return 0;   
//}