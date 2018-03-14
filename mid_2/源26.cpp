//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//#include<stdio.h>
//using namespace std;
//const int N=2e5+10;
//int n,c[N],h[N],sa[N],tsa[N],ran[N],tran[N];
//char s[N];
//struct Suffix{
//    void DA(int maxx=256){
//        int p;
//        for(int i=0;i<=maxx;i++) c[i]=0;
//        for(int i=1;i<=n;i++) c[ran[i]=s[i]]++;
//        for(int i=2;i<=maxx;i++) c[i]+=c[i-1];
//        for(int i=n;i;i--) sa[c[ran[i]]--]=i;
//        tran[sa[1]]=p=1;
//        for(int i=2;i<=n;i++){
//            if(ran[sa[i]]!=ran[sa[i-1]]) p++;
//            tran[sa[i]]=p;
//        }
//        for(int i=1;i<=n;i++) ran[i]=tran[i];
//        for(int k=1;p<n;k<<=1,maxx=p){
//            p=0;
//            for(int i=n-k+1;i<=n;i++) tsa[++p]=i;
//            for(int i=1;i<=n;i++) if(sa[i]>k) tsa[++p]=sa[i]-k;
//            for(int i=0;i<=maxx;i++) c[i]=0;
//            for(int i=1;i<=n;i++) tran[i]=ran[tsa[i]];
//            for(int i=1;i<=n;i++) c[tran[i]]++;
//            for(int i=2;i<=maxx;i++) c[i]+=c[i-1];
//            for(int i=n;i;i--) sa[c[tran[i]]--]=tsa[i];
//            tran[sa[1]]=p=1;
//            for(int i=2;i<=n;i++){
//                if(ran[sa[i]]!=ran[sa[i-1]]||ran[sa[i]+k]!=ran[sa[i-1]+k]) p++;
//                tran[sa[i]]=p;
//            }
//            for(int i=1;i<=n;i++) ran[i]=tran[i];
//        }
//        for(int i=1,k=0;i<=n;i++){
//            int j=sa[ran[i]-1];
//            while(s[i+k]==s[j+k]) k++;
//            h[ran[i]]=k;if(k>0) k--;
//        }
//    }
//    void work(){
//        scanf("%s",s+1);n=strlen(s+1);
//        s[++n]='#';int T=n;
//        scanf("%s",s+n+1);int t=strlen(s+n+1);
//        n+=t;
//        DA();
//        //min(两个Suffix的lcp){Suffix不包含'#'} 
//        int ans(0);
//        for(int i=1;i<=n;i++){
//            if(ans<h[i]){
//                if(sa[i]>T&&sa[i-1]<T) ans=h[i];
//                if(sa[i]<T&&sa[i-1]>T) ans=h[i];
//            }
//        }
//        printf("%d\n",ans);
//    }
//}suffix;
//int main(){
//    suffix.work();
//    return 0;
//}