//#include<cstdio>
//int main() {
//	static int n, m[256], c[16];
//	scanf("%d", &n);
//	for (int i(0); i < n; ++i)
//		scanf("%*s");
//	for (int i(1); scanf(" %c", c + i), i < n; ++i)
//		for (int j(1); j < n; ++j) {
//			char s[9];
//			scanf("%s", s);
//			if (!s[1])
//				++m[s[0]];
//		}
//	for (int i(1); i < n; ++i)
//		if (m[c[i]])
//			printf("%c=%d ", c[i], m[c[i]] - 1);
//	printf("\n%d\n", --n);
// 	return 0;
//}