//#include <algorithm>
//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//#include <cstdio>
//#include <cmath>
//using namespace std;
//typedef long long LL; 
//
//
//int fac[210000],inv[210000];
//const int N = 1 << 19; 
//const int P = 998244353; 
//const int G = 3; 
//const int NUM = 20; 
//   
//LL  wn[NUM]; 
//LL  a[N], b[N]; 
//char A[N], B[N]; 
//   
//LL quick_mod(LL a, LL b, LL m) 
//{ 
//    LL ans = 1; 
//    a %= m; 
//    while(b) 
//    { 
//        if(b & 1) 
//        { 
//            ans = ans * a % m; 
//            b--; 
//        } 
//        b >>= 1; 
//        a = a * a % m; 
//    } 
//    return ans; 
//} 
//void GetWn() 
//{ 
//    for(int i=0; i<NUM; i++) 
//    { 
//        int t = 1 << i; 
//        wn[i] = quick_mod(G, (P - 1) / t, P); 
//    } 
//}    
//void Prepare(char A[], char B[], LL a[], LL b[], int &len) 
//{ 
//    len = 1; 
//    int len_A = strlen(A); 
//    int len_B = strlen(B); 
//    while(len <= 2 * len_A || len <= 2 * len_B) len <<= 1; 
//    for(int i=0; i<len_A; i++) 
//        A[len - 1 - i] = A[len_A - 1 - i]; 
//    for(int i=0; i<len - len_A; i++) 
//        A[i] = '0'; 
//    for(int i=0; i<len_B; i++) 
//        B[len - 1 - i] = B[len_B - 1 - i]; 
//    for(int i=0; i<len - len_B; i++) 
//        B[i] = '0'; 
//    for(int i=0; i<len; i++) 
//        a[len - 1 - i] = A[i] - '0'; 
//    for(int i=0; i<len; i++) 
//        b[len - 1 - i] = B[i] - '0'; 
//}    
//void Rader(LL a[], int len) 
//{ 
//    int j = len >> 1; 
//    for(int i=1; i<len-1; i++) 
//    { 
//        if(i < j) swap(a[i], a[j]); 
//        int k = len >> 1; 
//        while(j >= k) 
//        { 
//            j -= k; 
//            k >>= 1; 
//        } 
//        if(j < k) j += k; 
//    } 
//} 
//void NTT(LL a[], int len, int on) 
//{ 
//    Rader(a, len); 
//    int id = 0; 
//    for(int h = 2; h <= len; h <<= 1) 
//    { 
//        id++; 
//        for(int j = 0; j < len; j += h) 
//        { 
//            LL w = 1; 
//            for(int k = j; k < j + h / 2; k++) 
//            { 
//                LL u = a[k] % P; 
//                LL t = w * (a[k + h / 2] % P) % P; 
//                a[k] = (u + t) % P; 
//                a[k + h / 2] = ((u - t) % P + P) % P; 
//                w = w * wn[id] % P; 
//            } 
//        } 
//    } 
//    if(on == -1) 
//    { 
//        for(int i = 1; i < len / 2; i++) 
//            swap(a[i], a[len - i]); 
//        LL Inv = quick_mod(len, P - 2, P); 
//        for(int i = 0; i < len; i++) 
//            a[i] = a[i] % P * Inv % P; 
//    } 
//} 
//void Conv(LL a[], LL b[], int n) 
//{ 
//    NTT(a, n, 1); 
//    NTT(b, n, 1); 
//    for(int i = 0; i < n; i++) 
//        a[i] = a[i] * b[i] % P; 
//    NTT(a, n, -1); 
//}
//
//int w[110000],fs[2][110000];
//int C(int n,int m)
//{
//    return 1LL*fac[n]*inv[m]%P*inv[n-m]%P;
//}
//int main()
//{
//    int n,k;
//    GetWn();
//    scanf("%d%d",&n,&k);
//    int i,j,s,p,q,ip;
//    for(i=0;i<=n+k;i++)
//    {
//        if(i==0)
//           fac[i]=1;
//        else
//           fac[i]=1LL*fac[i-1]*i%P;
//    }
//    inv[n+k]=quick_mod(fac[n+k],P-2,P);
//    for(i=n+k-1;i>=0;i--)
//       inv[i]=1LL*inv[i+1]*(i+1)%P;
//
//    for(i=0;i<k;i++)
//       scanf("%d",&w[i]);
//    memset(fs,0,sizeof(fs));
//    for(i=0;i<=n;i++)
//    {
//        ip=0;
//        if(n%2&&i%2==0)
//           ip=1;
//        if(n%2==0&&i%2)
//           ip=1;
//        fs[ip][i]=C(n,i);
//        if(i%4==0&&(n%4==2||n%4==3))
//           fs[ip][i]*=-1;
//        else if(i%4==1&&(n%4==1||n%4==2))
//           fs[ip][i]*=-1;
//        else if(i%4==2&&(n%4==0||n%4==1))
//           fs[ip][i]*=-1;
//        else if(i%4==3&&(n%4==3||n%4==0))
//           fs[ip][i]*=-1;
//        if(fs[ip][i]<0)
//           fs[ip][i]+=P;
//    }
//
//    int len=1;
//    while(len<=(k+n+1))
//        len<<=1;
//
//
//    for(j=0;j<2;j++)
//    {
//       for(i=0;i<len;i++)
//       {
//          if(i<k)
//            a[i]=1LL*w[i]*inv[i]%P;
//          else
//            a[i]=0;
//       }
//       for(i=0;i<len;i++)
//       {
//          if(i<=n)
//             b[i]=fs[j][i];
//          else
//             b[i]=0;
//        }
//    
//	   Conv(a,b,len);
//       for(i=0;i<n+k;i++)
//       {
//            if(i)
//               putchar(' ');
//            printf("%d",1LL*a[i]*fac[i]%P);
//       }
//       printf("\n");
//    }
//    return 0;
//}