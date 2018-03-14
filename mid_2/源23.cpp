//#include<cstdio>
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//long long s[16],f[16][(1<<16)+1];
//int main(){
//    int n,K,m=0x3f3f3f3f;
//    scanf("%d%d",&n,&K);
//    for(int i=0;i<n;i++) scanf("%d",s+i);
//    for(int i=0;i<n;i++) f[i][1<<i]=1;
//    for(int i=0;i<(1<<n);i++){
//        for(int j=0;j<n;j++){
//            if(i&(1<<j)){
//                for(int k=0;k<n;k++){
//                    if(!(i&(1<<k))&&abs(s[j]-s[k])>K){
//                        f[k][i|(1<<k)]+=f[j][i];
//                    }
//                }
//            }
//        }
//    }
//    long long ans=0;
//    for(int i=0;i<n;i++){
//        ans+=f[i][(1<<n)-1];
//    }
//    printf("%lld\n",ans);
//    return 0;
//}