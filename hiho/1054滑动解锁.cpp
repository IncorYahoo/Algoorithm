#include <bits/stdc++.h>
using namespace std;

int t, n;
int connect[10][10];
int mark[10][10];
int pos[10];
bool used[10];
int ans;

void dfs(int cur){
    if(cur > 4){
        int k = 0;
        for(int i = 2; i < cur; ++i){
            if(connect[pos[i-1]][pos[i]]) k++;  // 连接的折线段数目
        }
        if(k == n) ans++;
        // 没有return，因为要一直枚举4~9的排列
    }

    for(int i = 1; i <= 9; ++i){
        if(!used[i]){
            // e.g. 访问了13, 而2没有访问
            if(mark[i][pos[cur-1]] && !used[ mark[i][pos[cur-1]] ]) continue;
            used[i] = true;
            pos[cur] = i;
            dfs(cur + 1);
            used[i] = false;
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
freopen("data.in", "r", stdin);
#endif // ONLINE_JUDGE

    mark[1][3] = 2, mark[1][7] = 4, mark[1][9] = 5;
    mark[2][8] = 5, mark[3][7] = 5, mark[3][9] = 6;
    mark[4][6] = 5, mark[7][9] = 8;

    for(int i = 1; i <= 9; ++i){
        for(int j = i + 1; j <= 9; ++j) mark[j][i] = mark[i][j];
    }

    cin >> t;
    while(t--){
        cin >> n;
        memset(connect, 0, sizeof(connect));
        for(int i = 0; i < n; ++i){
            int x, y; cin >> x >> y;
            connect[x][y] = connect[y][x] = 1;
        }
        memset(used, 0, sizeof(used));
        ans = 0;
        dfs(1);
        cout << ans << endl;
    }
    return 0;
}