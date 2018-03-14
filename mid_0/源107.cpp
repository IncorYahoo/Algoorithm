//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<cmath>
//#include<algorithm>
//#define LL long long
//#define N 1000009
//using namespace std;
//int a[N],n;
//int b[N],r;
//int maxn[N];
//int main()
//{
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
//    for(int i=n;i>=1;i--) maxn[i]=max(maxn[i+1],a[i]);
//
//    for(int i=1;i<=n;i++) 
//    {
//        while(maxn[i]<b[r])
//        {
//            printf("%d ",b[r--]);
//        }
//        int j=i;
//        while(a[j]!=maxn[i]) b[++r]=a[j],j++;
//        printf("%d ",maxn[i]);
//        i=j;
//    }
//    for(int i=r;i>1;i--) printf("%d ",b[i]);
//	printf("%d",b[1]);
//    return 0;
//}