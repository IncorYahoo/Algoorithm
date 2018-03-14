//#include<cstdio>
//#include<cstring>
//#include<bitset>
//#include<algorithm>
//using namespace std;
//long long N=1e9,x,y,ans;
//long long p[18]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61};//21
//bitset<20000000>ok;
//void solve1(){
//    int now=0;
//    for(int i=2;i<y;i++) if(!ok[i])for(int j=i;j<=N;j+=i)  ok[j]=1;
//    for(int i=1;i<N;++i) if(!ok[i]) {
//        ++now;
//        if(now==x) {ans=i;break;}
//    }
//    return;
//}
//long long cal(long long a,long long ord){
//    if(p[ord]>=y) return a;
//    if(!a) return 0;
//    return cal(a,ord+1)-cal(a/p[ord],ord+1);
//}
//void solve2(){
//    long long l=1,r=N;
//    while(r>=l) {
//        long long mid=(l+r)>>1;
//        if(cal(mid,0)>=x) r=mid-1,ans=mid;
//        else l=mid+1;
//    }
//}
//int main(){
//    scanf("%lld%lld",&x,&y);
//    N/=y;
//	
//    /* if(y>61) solve1();
//     else */
//		 solve2();
//    printf("%lld\n",y*ans);
//	system("pause");
//
//}