//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cstdlib>
//#include <algorithm>
//#define MAXN (30000 + 5)
//using namespace std;
//int n;
//bool prb[MAXN];
//int pri[MAXN];
//int cntp = 0;
//void er();
//int main()
//{
//    scanf("%d", &n);
//    er();
//    if (!prb[n])
//    {
//        printf("\\t");
//    }
//    else
//    {
//        printf("\\n");
//    }
//    return 0;
//}
//void er()
//{
//    memset(prb, false, sizeof(prb));
//    for (int i = 2; i <= n; i++)
//    {
//        if (!prb[i])
//        {
//            pri[++cntp] = i;
//        }
//        for (int j = 1; j <=cntp && (i * pri[j] <= n); j++)
//        {
//            prb[i * pri[j]] = true;
//            if (i % pri[j] == 0)
//            {
//                break;
//            }
//        }
//    }
//}
