//#include<cstdio>
//#include<cmath>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//typedef unsigned long long ll;
//const int N=600010;
//const ll inf=1ULL<<63;
//const double A=0.8;
//int m,i,all,pre[N],last,mask;
//char op[9],s[N],tmp[3000010];
//ll tl[N],tr[N],tm[N];
//int size[N],son[N][2],f[N],v[N],val[N],tot,root,id[N],cnt;
//inline void read(int&a){char c;while(!(((c=getchar())>='0')&&(c<='9')));a=c-'0';while(((c=getchar())>='0')&&(c<='9'))(a*=10)+=c-'0';}
//inline bool cmp(int a,int b){return s[a]==s[b]?tm[pre[a]]>tm[pre[b]]:s[a]>s[b];}
//int ins(int x,int p){
//  val[x]++;
//  int b=cmp(p,x);
//  if(!son[x][b]){
//    son[x][b]=++tot;f[tot]=x;v[tot]=val[tot]=1;
//    if(!b)tl[tot]=tl[x],tr[tot]=tm[x];else tl[tot]=tm[x],tr[tot]=tr[x];
//    tm[tot]=(tl[tot]+tr[tot])>>1;
//    return tot;
//  }else return ins(son[x][b],p);
//}
//void dfs(int x){
//  if(son[x][0])dfs(son[x][0]);
//  id[++cnt]=x;
//  if(son[x][1])dfs(son[x][1]);
//}
//int build(int fa,int l,int r,ll a,ll b){
//  int mid=(l+r)>>1,x=id[mid];
//  f[x]=fa;son[x][0]=son[x][1]=0;size[x]=1;tl[x]=a;tr[x]=b;tm[x]=(a+b)>>1;
//  val[x]=v[x];
//  if(l==r)return x;
//  if(l<mid){
//    size[x]+=size[son[x][0]=build(x,l,mid-1,a,tm[x])];
//    val[x]+=val[son[x][0]];
//  }
//  if(r>mid){
//    size[x]+=size[son[x][1]=build(x,mid+1,r,tm[x],b)];
//    val[x]+=val[son[x][1]];
//  }
//  return x;
//}
//inline int rebuild(int x){
//  cnt=0;dfs(x);return build(f[x],1,cnt,tl[x],tr[x]);
//}
//inline void insert(int p){
//  last=p;
//  if(!root){root=tot=size[1]=v[1]=val[1]=1;tr[1]=inf,tm[1]=inf>>1;return;}
//  int x=ins(root,p);
//  int deep=0,z=x;while(z)size[z]++,z=f[z],deep++;
//  if(deep<log(tot)/log(1/A))return;
//  while((double)size[son[x][0]]<A*size[x]&&(double)size[son[x][1]]<A*size[x])x=f[x];
//  if(!x)return;
//  if(x==root){root=rebuild(x);return;}
//  int y=f[x],b=son[y][1]==x,now=rebuild(x);
//  son[y][b]=now;
//}
//inline void decode(int l){
//  int t=mask;
//  for(int i=1;i<=l;i++){
//    t=(t*131+i-1)%l;
//    swap(tmp[i],tmp[t+1]);
//  }
//}
//inline void add(){
//  scanf("%s",tmp+1);
//  int l=strlen(tmp+1);
//  decode(l);
//  for(int i=1;i<=l;i++){
//    pre[all+i]=last;
//    s[all+i]=tmp[i];
//    insert(all+i);
//  }
//  all+=l;
//}
//inline void del(){
//  int k;
//  read(k);
//  while(k--){
//    int x=last;
//    v[x]=0;
//    for(;x;x=f[x])val[x]--;
//    last=pre[last];
//  }
//}
//inline bool check(int x,int l){//smaller
//  for(int i=1;i<=l;x=pre[x],i++){
//    if(!x)return 1;
//    if(s[x]!=tmp[i])return s[x]<tmp[i];
//  }
//  return 0;
//}
//inline int ask(int l){
//  int t=0,x=root;
//  while(x)if(check(x,l))t+=val[son[x][0]]+v[x],x=son[x][1];else x=son[x][0];
//  return t;
//}
//inline int query(){
//  scanf("%s",tmp+1);
//  int l=strlen(tmp+1);
//  decode(l);
//  reverse(tmp+1,tmp+l+1);
//  tmp[l+1]='Z'+1;
//  return ask(l+1)-ask(l);
//}
//int main(){
//  read(m);
//  scanf("%s",s+1);
//  all=strlen(s+1);
//  for(i=1;i<=all;i++)pre[i]=i-1,insert(i);
//  while(m--){
//    scanf("%s",op);
//    if(op[0]=='A')add();
//    if(op[0]=='D')del();
//    if(op[0]=='Q')printf("%d\n",i=query()),mask^=i;
//  }
//  return 0;
//}