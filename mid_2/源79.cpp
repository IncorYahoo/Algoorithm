//#include<iostream>
//#include<cstdlib>
//#include<cstring>
//#include<algorithm>
//#include<cmath>
//#include<stdio.h>
//#include<vector>
//#include<map>
//#include<set>
//using namespace std;
// 
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//const long long inf=1e18;
//int g,n,num,aa[7001000],ma,mi[2][7001000],ll[7010000],rr[7010000];
//long long ans;
//int main()
//{
//    cin>>g>>n;
//    int i,j,s,p,q;
//    num=0;
//    while(g--)
//    {
//        int ns,z,a,b,x,mod;
//       cin>>ns>>z>>a>>b>>mod;
//        for(i=1;i<=ns;i++)
//        {
//            aa[num++]=z;
//            x=(1LL*z*a+1LL*b)%mod;
//            if(x==0)
//               x=mod;
//            z=x;
//        }
//    }
//   f(i,0,num-1)
//	   ma=max(ma,aa[i]);
//    mi[0][0]=0;
//	f(i,1,num) 
//       mi[0][i]=max(mi[0][i-1],aa[i-1]);
//    mi[1][num]=0;
//    g(i,num-1,0)
//		mi[1][i]=max(mi[1][i+1],aa[i]);
//   
//	
//int l=0,r,now=0;
//   long long awp;
//   ans=inf;
//   int i,j;
//   for(i=0;i<num;i++)if(ma==aa[i])break;
//   for(j=num-1;i>=0;i--)if(ma==aa[j])break;
//   
//    while(i>=0&&j<num)
//    {
//		awp=1LL*(j-i+1)*ma+1LL*i*max(mi[0][i],mi[1][j+1])+1LL*(num-1-j)*max(mi[0][i],mi[1][j+1]);
//        ans=ans>awp?awp:ans;
//        int vl;
//        if(mi[0][i]<=mi[1][j+1])
//        {
//            vl=mi[1][j+1];
//            while(mi[1][j+1]==vl)
//                j++;
//        }
//        else
//        {
//            vl=mi[0][i];
//            while(mi[0][i]==vl)
//               i--;
//        }
//	}
//	ans=ans>awp?awp:ans;
//	for(i=0;i<num;i++)
//    {
//        j=i-1;
//        while(j>=0&&aa[j]<=aa[i])
//            j=ll[j];
//        ll[i]=j;
//    }
//    for(i=num-1;i>=0;i--)
//    {
//        j=i+1;
//        while(j<num&&aa[j]<=aa[i])
//           j=rr[j];
//        rr[i]=j;
//    }
//    for(i=0;i<num;i++)
//    {
//    //  printf("i=%d,ll[i]=%d,rr[i]=%d\n",i,ll[i],rr[i]);
//       awp=1LL*(rr[i]-ll[i]-1)*aa[i]+1LL*(ll[i]+1)*max(mi[0][ll[i]+1],mi[1][rr[i]])+1LL*max(mi[0][ll[i]+1],mi[1][rr[i]])*(num-rr[i]);
//       if(ans>awp)
//          ans=awp;
//    }
//    printf("%lld\n",ans);
// 
//
//   return 0;
//}