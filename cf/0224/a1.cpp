

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <functional>
#include <vector>
#include <numeric>
#include <deque>
#include <utility>
#include <bitset>
#include <iostream>
#include <complex>
using namespace std;

typedef long long lint;
typedef long double llf;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef tuple<int, int, int> tp;
typedef pair<pii, int> piii;
typedef complex<double> pnt;
#pragma warning(disable:4996)
#pragma comment(linker, "/STACK:336777216")

#define all(x) (x).begin(), (x),end()
#define szz(x) (int)(x).size()
#define rep(i, n) for(int i=0; i<n; i++)
#define Se second
#define Fi first

const int inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;


int a[sz];
char b[sz];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	scanf("%s", b + 1);
	int L = -1e9, R = 1e9;
	for (int i = 5; i <= n; i++) {
		if (b[i] != b[i - 1]) {
			if (b[i] == '1') {
				for (int j = 0; j < 5; j++) L = max(L, a[i - j] + 1);
			}
			else {
				for (int j = 0; j < 5; j++) R = min(R, a[i - j] - 1);
			}
		}
	}
	cout << L << ' ' << R << endl;
	return 0;
}