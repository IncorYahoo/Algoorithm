//#include <iostream>
//#include<queue>
//using namespace std;
//#define ll long long
//ll n,m;
//ll sx,sy,x1,x2,x3,y11,y2,y3,ex,ey;
//ll t1,t2,t3;
//char s[105][105];
//bool vis[105][105];
// 
//struct node
//{
//    ll x,y,t;
//    node(){}
//    node(ll x,ll y,ll t):x(x),y(y),t(t){}
//}st,ed,w1,w2,w3;
// 
//ll fx[]={0,0,1,-1};
//ll fy[]={1,-1,0,0};
// 
//ll bfs(node ST,node ED,bool f)
//{
//    queue<node> q;
//    q.push(ST);
//    memset(vis,0,sizeof(vis));
// 
//    while(!q.empty())
//    {
//        node now = q.front();
//        q.pop();
// 
//        for(ll i=0;i<4;i++)
//        {
//            ll xx=now.x+fx[i],yy=now.y+fy[i];
//            if(xx<0||xx==n||yy<0||yy==m||
//               vis[xx][yy]||(s[xx][yy]=='#'&&f))continue;
//            q.push(node(xx,yy,now.t+1));
//            vis[xx][yy]=1;
// 
//            if(xx==ED.x&&yy==ED.y)
//                return now.t+1;
//        }
//    }
//    return 0x3f3f3f3f;
//}
// 
// 
//int main()
//{
//    while(cin>>n>>m)
//    {
//        ll ans=0x3f3f3f3f;
//        ll cnt=0;
//        for(ll i=0;i<n;i++)scanf("%s",s[i]);
//        cin>>sx>>sy>>x1>>y11>>x2>>y2>>x3>>y3>>ex>>ey;
// 
//        st = node(sx-1,sy-1,0);
//        ed = node(ex-1,ey-1,0);
//        w1 = node(x1-1,y11-1,0);
//        w2 = node(x2-1,y2-1,0);
//        w3 = node(x3-1,y3-1,0);
// 
//        cin>>t1>>t2>>t3;
// 
//        //1 2 3
//        cnt+=(1)*bfs(st,w1,0);
//        cnt+=(1+t1)*bfs(w1,w2,0);
//        cnt+=(1+t1+t2)*bfs(w2,w3,0);
//        cnt+=(1+t1+t2+t3)*bfs(w3,ed,1);
//        ans=min(ans,cnt);
//        //cout<<cnt<<endl;
// 
//        cnt=0;
//        //1 3 2
//        cnt+=(1)*bfs(st,w1,0);
//        //cout<<cnt<<" ";
//        cnt+=(1+t1)*bfs(w1,w3,0);//cout<<cnt<<" ";
//        cnt+=(1+t1+t3)*bfs(w3,w2,0);//cout<<cnt<<" ";
//        cnt+=(1+t1+t2+t3)*bfs(w2,ed,1);
//        ans=min(ans,cnt);
//        //cout<<cnt<<endl;
//        cnt=0;
//        //2 1 3
//        cnt+=(1)*bfs(st,w2,0);
//        cnt+=(1+t2)*bfs(w2,w1,0);
//        cnt+=(1+t1+t2)*bfs(w1,w3,0);
//        cnt+=(1+t1+t2+t3)*bfs(w3,ed,1);
//        ans=min(ans,cnt);
//       // cout<<cnt<<endl;
// 
//        cnt=0;
//        //2 3 1
//        cnt+=(1)*bfs(st,w2,0);
//        cnt+=(1+t2)*bfs(w2,w3,0);
//        cnt+=(1+t2+t3)*bfs(w3,w1,0);
//        cnt+=(1+t1+t2+t3)*bfs(w1,ed,1);
//        ans=min(ans,cnt);
//       // cout<<cnt<<endl;
// 
//        cnt=0;
//        //3 1 2
//        cnt+=(1)*bfs(st,w3,0);
//        cnt+=(1+t3)*bfs(w3,w1,0);
//        cnt+=(1+t1+t3)*bfs(w1,w2,0);
//        cnt+=(1+t1+t2+t3)*bfs(w2,ed,1);
//        ans=min(ans,cnt);
//        //cout<<cnt<<endl;
// 
//        cnt=0;
//        //3 2 1
//        cnt+=(1)*bfs(st,w3,0);
//        cnt+=(1+t3)*bfs(w3,w2,0);
//        cnt+=(1+t2+t3)*bfs(w2,w1,0);
//        cnt+=(1+t1+t2+t3)*bfs(w1,ed,1);
//        ans=min(ans,cnt);
//       // cout<<cnt<<endl;
// 
//        cout<<ans<<endl;
//    }
//    return 0;
//}