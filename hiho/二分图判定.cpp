 #include<bits/stdc++.h>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
 			freopen("out","w",stdout); 
 
 const int  inf = 987654321;
 const int sz = 1e6 + 5;
 const int mod = 1e9 + 7;
 const int sqrtn = 300; 
 
 #define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
 #define f(i,l,r) for(int i=l;i<=r;++i)
 #define g(i,l,r) for(int i=l;i>=r;--i)
 #define CLR(arr,val) memset(arr,val,sizeof(arr)) 
 typedef long long ll; 
 
 int t ,n,m,u,v;
#define MAXN 10001
bool graph[MAXN][MAXN];
int state[MAXN];
bool bfs(int  s )
{
	queue <int >q ;
	q.push(s);
	state[s]=1;
	while(!q.empty())
	{
		int t = q.front();
		q.pop();
		f(i,1,n)
		{
			if(t!=i && graph[t][i])
			{
				if(state[i]==0)
				{
					q.push(i);
					state[i] = -state[t];
				}
				if(state[i] == state[t])
					return false;
			}
		}
	}
 	return true;
 	
}
 bool check(int n)
 {
 	bool flag =false;
 	f(i,1,n)
 	{
 		if(state[i]==0)
 		{
 			bool reasult= bfs(i);
 			if(reasult ==false)
 				return false;
 		}
 	}
 	return true;
 }
int main()
 {
 	LOACL
 	cin>>t;
 	while(t--)
 	{
 		 
 		CLR(graph,0);
 		CLR(state,0);
 		cin>>n>>m;
 
 		f(i,1,m)
 		{
 			cin>>u>>v;
 			graph[u][v]=1; 
 			graph[v][u]=1; 
 		}	

 		 
 	 
 		if(check(n)) cout<<"Correct"<<endl;
 		else cout<<"Wrong"<<endl;
 	}
 	return 0;
 }
