include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <complex>
#include <random>
#include <bitset>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int MOD = 1000000007;
int N, X;
string S;
ll dp[105][105][105];
ll power[105];

int main()
{
    ios::sync_with_stdio(0);
    
    power[0] = 2;
    power[1] = 2;
    for (int i = 2; i < 105; i++)
        power[i] = power[i - 1]*power[i - 2] % MOD;

    cin >> N >> X >> S;
    for (int i = 0; i < N; i++)
        dp[S[i] - '0'][i][i] = 1;

    for (int i = 2; i <= X; i++)
        for (int j = 0; j < N; j++)
            for (int k = j; k < N; k++)
            {
                if (k == N - 1)
                    dp[i][j][k] = (dp[i][j][k] + dp[i - 1][j][k]*power[i - 2] % MOD) % MOD;
                else
                    dp[i][j][k] = (dp[i][j][k] + dp[i - 1][j][k]) % MOD;
                if (j == 0)
                    dp[i][j][k] = (dp[i][j][k] + dp[i - 2][j][k]*power[i - 1] % MOD) % MOD;
                else
                    dp[i][j][k] = (dp[i][j][k] + dp[i - 2][j][k]) % MOD;
                for (int a = j; a < k; a++)
                    dp[i][j][k] = (dp[i][j][k] + dp[i - 1][j][a]*dp[i - 2][a + 1][k] % MOD) % MOD;
            }

    cout << dp[X][0][N - 1] << "\n";

    return 0;
}