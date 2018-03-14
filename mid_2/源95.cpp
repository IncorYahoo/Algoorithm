//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<ctime>
//#include<cstdlib>
//#include<algorithm>
//#include<cmath>
//#include<string>
//using namespace std;
//int read(){
//    int xx=0,ff=1;char ch=getchar();
//    while(ch>'9'||ch<'0'){if(ch=='-')ff=-1;ch=getchar();}
//    while(ch>='0'&&ch<='9'){xx=(xx<<3)+(xx<<1)+ch-'0';ch=getchar();}
//    return xx*ff;
//}
//inline int mymin(int xx,int yy)
//{if(xx<yy)return xx;return yy;}
//
//const int maxn=1010;
//int N,M;
//int dfn[maxn],low[maxn],tim,scc_cnt,scc[maxn];
//int instc[maxn],stc[maxn],top;
//int ind[maxn],ans,p[maxn],ok[maxn];
//int lin[maxn],len;
//struct edge{
//    int y,next;
//}e[1000010];
//void insert(int xx,int yy){
//    e[++len].next=lin[xx];
//    lin[xx]=len;
//    e[len].y=yy;
//}
//void init(){
//    len=tim=scc_cnt=top=ans=0;
//    memset(dfn,0,sizeof(dfn));
//    memset(scc,0,sizeof(scc));
//    memset(instc,0,sizeof(instc));
//    memset(stc,0,sizeof(stc));
//    memset(ind,0,sizeof(ind));
//    memset(p,0,sizeof(p));
//    memset(ok,0,sizeof(ok));
//}
//void dfs(int u){
//    dfn[u]=low[u]=++tim;
//    stc[++top]=u; instc[u]=1;
//    for(int i=lin[u];i;i=e[i].next){
//        int v=e[i].y;
//        if(!dfn[v]){
//            dfs(v);
//            low[u]=mymin(low[u],low[v]);
//        }
//        else if(instc[v])
//            low[u]=mymin(low[u],dfn[v]);
//    }
//    if(dfn[u]==low[u]){
//        scc_cnt++;
//        while(1){
//            int x=stc[top--];
//            scc[x]=scc_cnt;
//            instc[x]=0;
//            if(x==u)
//                break;
//        }
//    }
//}
//void tarjan(){
//    for(int i=1;i<=N;i++)
//        if(!dfn[i])
//            dfs(i);
//    for(int i=1;i<=N;i++)
//      for(int j=lin[i];j;j=e[j].next)
//        if(scc[i]!=scc[e[j].y])
//            ind[scc[e[j].y]]++;
//    for(int i=1;i<=scc_cnt;i++)
//        if(ind[i]==0)
//            ans++;
//    if(ans>M){
//       printf("-1\n");
//       return ;
//    }
//    for(int i=1;i<=N;i++)
//        if(ind[scc[i]]==0&&p[i]==1)
//            ok[scc[i]]=1;
//    for(int i=1;i<=scc_cnt;i++)
//        if(ind[i]==0&&!ok[i]){
//            printf("-1\n");
//            return ;
//        }
//    printf("%d\n",ans);
//    return ;
//}
//int main(){
//    freopen("in","r",stdin);
//    while(scanf("%d%d",&N,&M)!=EOF){
//        init();
//        int x,y;
//		//HA 能联系到的间谍数
//        for(int i=1;i<=M;i++)	
//            p[read()]=1;
//        for(int i=1;i<=N;i++){
//            y=read();
//            for(int j=1;j<=y;j++){
//                x=read();
//                insert(i,x);
//            }
//        }
//        tarjan();
//    }
//    return 0;
//}