//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//#include<queue>
//#include<algorithm>
//#define INF 0x3f3f3f3f
//using namespace std;
//char g[510][510];
//bool vis[510][510];
////int sx,sy,ex,ey,kx,ky;
//int dx[4]={0,0,-1,1};
//int dy[4]={-1,1,0,0};
//int n,m;
//int ans;
//struct node
//{
//    int x,y,step;
//}ss,ee,kk;
//void bfs(node s,node e,bool key)
//{
//    memset(vis,0,sizeof(vis));
//    queue<node>q;
//    node temp;
//    temp.x=s.x;temp.y=s.y;temp.step=s.step;
//    q.push(temp);
//    while(!q.empty())
//    {
//        temp=q.front();
//        //printf("%d %d %d\n",temp.x,temp.y,temp.step);
//        q.pop();
//        for(int i=0;i<4;i++)
//        {
//            int x=temp.x+dx[i];int y=temp.y+dy[i];
//            if(x>=1&&x<n-1&&y>=1&&y<m-1&&!vis[x][y]
//               &&g[x][y]!='W'&&(g[x][y]!='D'||(g[x][y]=='D'&&key==true)))
//            {
//                if(g[x][y]=='E')
//                {
//                    ans=min(ans,temp.step+1);
//                    return;
//                }
//                if(g[x][y]=='K')
//                    kk.step=temp.step+1;
//                vis[x][y]=true;
//                node tp;
//                tp.x=x;tp.y=y;tp.step=temp.step+1;
//                q.push(tp);
//            }
//        }
//    }
//}
//int main()
//{
//    scanf("%d%d",&n,&m);
//    for(int i=0;i<n;i++)
//        scanf("%s",g[i]);
//    for(int i=0;i<n;i++)
//        for(int j=0;j<m;j++)
//        {
//            if(g[i][j]=='S')
//                ss.x=i,ss.y=j,ss.step=0;
//            if(g[i][j]=='E')
//                ee.x=i,ee.y=j;
//            if(g[i][j]=='K')
//                kk.x=i,kk.y=j,kk.step=-1;
//        }
//    ans=INF;
//    bfs(ss,ee,false);//Ã»ÓÐÔ¿³×
//    if(kk.step!=-1)bfs(kk,ee,true);//ÓÐÔ¿³×
//    if(ans==INF)printf("-1\n");
//    else printf("%d\n",ans);
//    return 0;
//}