#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,int>
#define lowbit(x) x&(-x)
#define X first
#define Y second 
class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
        if(board.size() !=3) return false;
        vector<string>::iterator it = board.begin();
        char a [4][4]={0};

        int cnt =0;
      	for(;it!=board.end();it++)
      	{
      		cnt++ ; 
      		for(int j = 0 ;j<=2;j++)
      			a[cnt][j+1]=(*it)[j];
      	}
      	int x =0,o=0;
      	for(int i = 1 ;i<=3 ;i++)
	      	 for(int j = 1 ;j<=3 ;j++)
		   	{
		   		if(a[i][j]=='X')x++;
		   		if(a[i][j]=='O')o++;
		   	}
		if(x!=o || x != o+1)  return false ; 
		x= 0;o=0;
		for(int i = 1 ;i<=3 ;i++)
	      	 if(a[i][1]=='X' &&a[i][2]=='X'&& a[i][3]=='X')
	      	 	x++;
	      	 else if(a[i][1]=='O' &&a[i][2]=='O'&& a[i][3]=='O')
	      	 	o++;
	      	 else  if(a[1][i]=='X' &&a[2][i]=='X'&& a[3][i]=='X')
	      	 	x++;
	      	 else if(a[1][i]=='O' &&a[2][i]=='O'&& a[3][i]=='O')
	      	 	o++;
			if(a[1][1]=='X' &&a[2][2]=='X'&& a[3][3]=='X')
				x++;
			if(a[1][1]=='O' &&a[2][2]=='O'&& a[3][3]=='O')
				o++;  
			if(a[3][1]=='O' &&a[2][2]=='O'&& a[1][3]=='O')
				o++; 
			if(a[3][1]=='X' &&a[2][2]=='X'&& a[1][3]=='X')
				x++; 
			
			if(x!=0 && o!=0)return false;
		 	return true;
       

    }
};
void work()
{
    
}

int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
    cout<<"hello"<<endl;

    return 0; 
}