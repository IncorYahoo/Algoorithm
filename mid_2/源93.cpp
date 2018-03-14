//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <utility>
//#include <algorithm>
//#include <cmath>
//#include <cstring>
//#include <map>
//#include <set>
//#include <stack>
//#include <queue>
//#include <deque>
//#include <cassert>
//#include <list>
//using namespace std;
//char a[1010][1010];
//int n,m;
//  
//int main()
//{
//    int ans1=0,ans2=0,cnt=0;
//
//    while(~scanf("%d%d",&n,&m))
//    {
//        memset(a,0,sizeof(a));
//        for(int i=1;i<=n;i++)  scanf("%s",a[i]+1);
//        for(int i=1;i<=n;i++)
//        {
//            for(int j=1;j<=m;j++)
//            {
//                if(a[i][j]=='.') cnt++;
//                //if(a[i][j]!='#'&&a[i-1][j]!='.'&&a[i][j-1]!='.') ans1++;
//                if(a[i][j]!='#'&&a[i+1][j]!='.'&&a[i][j+1]!='.') ans2++;
//            }
//        }
//        printf("%d\n",cnt==1?0:ans2);
//    }
//    return 0;
//}