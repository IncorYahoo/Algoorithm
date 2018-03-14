//
//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//#include <queue>
//using namespace std;
//typedef long long ll;
//const int N=1E5+5;
//int n,m,T,k;
//ll ans,x,a[N];
// 
//void work(int k,int w)
//{
//    for (int i=k;i<=n;i++) if (i>1&&m-(i-k)>=0) ans=min(ans,(ll)w+a[i]-a[k]+((ll)a[i]-a[i-1])*(m-(i-k)));
//    for (int i=k-1;i;i--) if (i<n&&m-(k-i)>=0) ans=min(ans,(ll)w+a[k]-a[i]+((ll)(a[i+1]-a[i]))*(m-(k-i)));
//}
// 
//int main()
//{
//    //freopen("1.in","r",stdin); freopen("1.out","w",stdout);
//    cin>>T;
//    while (T--)
//    {
//        cin>>n>>m>>x;
//
//        for (int i=1;i<=n;i++) scanf("%d",&a[i]);
//        ans=1E18;
//        for (k=1;x>a[k]&&k<=n;k++);
//        m--;
//        if (k<=n) work(k,a[k]-x);
//        if (k>1) work(k-1,x-a[k-1]);
//        cout<<ans<<endl;
//    }
//}