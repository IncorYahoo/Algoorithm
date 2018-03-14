#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cassert>

using namespace std;

const int MAXN = 2e5;

int cnt[MAXN];
vector <int> gr[MAXN];

void dfs(int v, int deep) {
    cnt[deep]++;
    for (int i = 0; i < (int)gr[v].size(); i++)
        dfs(gr[v][i], deep + 1);
}

int32_t main() {
    //assert(freopen("input.txt", "r", stdin));
    //assert(freopen("output.txt", "w", stdout));

    ios_base::sync_with_stdio(false);

    int n; cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int p; cin >> p; p--;
        gr[p].push_back(i + 1);
    }

    for (int i = 0; i < n; i++)
        cnt[i] = 0;
    dfs(0, 0);

    int res = 0;
    for (int i = 0; i < n; i++)
        res += cnt[i] % 2;

    cout << res << endl;

    return 0;
}