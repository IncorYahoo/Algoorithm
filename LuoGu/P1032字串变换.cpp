#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF ((ll)2e9)

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define sz(a)   strlen(a)
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);

#define lowbit(x) x&(-x)
#define X first
#define Y second 

#define pb push_back
#define pii pair<int,int>

int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int n;
string a,b;
string f[sqrtn],t[sqrtn];
struct  node{
	string str;
	int step;
};
map <string ,int> m;
int ans;
string trans(const string &str,int i,int j){//借鉴了stdcall大爷的思想
    string ans = "";
    if (i+f[j].length() > str.length())
        return ans;

    for (int k=0; k < f[j].length();k++)
        if (str[i+k] != f[j][k])
            return ans;

    ans = str.substr(0,i);
    ans+=t[j];
    ans+=str.substr(i+f[j].length());
    return ans;
}
 

void bfs()
{
	queue<node>q  ;
	q.push((node){a,0});
	while(!q.empty())
	{
		node t= q.front();
		q.pop();
		string temp;
		if(m.count(t.str)==1)continue;
		if(t.str==b){ ans = t.step ;break;}
		m[t.str]=1;
		f(i,0,t.str.length()-1)
		{
			f(j,0,n)
			{
				temp = trans(t.str,i,j);
				if(temp!="")
					q.push((node){temp,t.step+1});
			}
		}

	}
	if(ans>10||ans==0)
	 cout << "NO ANSWER!" << endl;
    else
        cout << ans << endl;
}

void work()
{
    cin>>a>>b;
    while(cin>>f[n]>>t[n])n++;
    bfs(); 
}

int main()
{
    FAST_IO ;
    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cout<<"hello"<<endl;
 
    work();
   
    return 0; 
}