#include <stdio.h>
#include <string.h>

using namespace std;
int cot,m;
int bro[210],fst[210],vis[210],ma[210],num[210];
bool dfs(int fa,int cur,int nex){
    if(cur==nex) return true;
    for(int i=fst[cur];i!=-1;i=bro[i]){
        int pos=ma[i];
        if(!vis[i]&&pos!=fa){
            vis[i]++;
            if(dfs(cur,pos,nex))
                return true;
            vis[i]--;
        }
    }
    return false;
}
int main()
{
    int T,i,j,k,n,a,b,flag;
    scanf("%d",&T);
    while(T--){
        memset(bro,-1,sizeof(bro));
        memset(fst,-1,sizeof(fst));
        memset(vis,0,sizeof(vis));
        scanf("%d",&n);
        j=1;
        for(i=1;i<n;i++){
            scanf("%d %d",&a,&b);
            ma[j]=b;bro[j]=fst[a];fst[a]=j;j++;
            ma[j]=a;bro[j]=fst[b];fst[b]=j;j++;
        }
        scanf("%d",&m);
        num[0]=1;flag=1;
        for(i=1;i<=m;i++){
            scanf("%d",&k);
            num[i]=k;
            if(flag)
                flag=dfs(0,num[i-1],num[i]);
        }


        if(flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}