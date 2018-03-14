//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//#include <queue>
//using namespace std;
//const int maxn=7e6+10,mod=1e9+7,inf=0x3f3f3f3f;
//int n,m,k,t,aa[maxn],q[maxn<<1],tot,L[maxn],R[maxn];
//int main()
//{
//	freopen("c.in","r",stdin);
//    int i,j;
//    int ng;
//    scanf("%d%d",&ng,&n);
//    for(i=1;i<=ng;i++)
//    {
//        int ns,s,a,b,mo;
//        scanf("%d%d%d%d%d",&ns,&s,&a,&b,&mo);
//        aa[++tot]=s;
//        for(j=1;j<ns;j++)
//        {
//            int tmp=(1LL*aa[tot]*a+b)%mo;
//            if(tmp==0)tmp=mo;
//            aa[++tot]=tmp;
//        }
//    }
//
//    int mx=-1;
//    for(i=1;i<=tot;i++)q[++q[0]]=i,mx=max(mx,aa[i]);
//    for(i=1;i<=tot;i++)
//    {
//        while(q[0]&&aa[q[q[0]]]<=aa[i])
//        {
//            q[0]--;
//        }
//        if(q[0])L[i]=q[q[0]];
//        else L[i]=i;
//        q[++q[0]]=i;
//    }
//    q[0]=0;
//    for(i=tot;i>=1;i--)q[++q[0]]=i;
//    for(i=tot;i>=1;i--)
//    {
//        while(q[0]&&aa[q[q[0]]]<=aa[i])
//        {
//            q[0]--;
//        }
//        if(q[0])R[i]=q[q[0]];
//        else R[i]=i+1;
//        q[++q[0]]=i;
//    }
//    long long ret=1e18;
//    for(i=1;i<=tot;i++)
//    {
//        int delta=R[i]-L[i]-1;
//        if(delta<=0)delta+=tot;
//        ret=min(ret,1LL*mx*(tot-delta)+1LL*aa[i]*delta);
//    }
//    printf("%lld\n",ret);
//    return 0;
//}