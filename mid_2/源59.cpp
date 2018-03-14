//#include<stdio.h>
//#define LL long long
//#define mod 1000000007
//LL Pow(LL a, LL b);
//LL C(LL m, LL n);
//LL Lucas(LL m, LL n);
//LL Fan(LL n, LL m);
//LL inv[2000005] = {1}, jc[2000005] = {1};
//int main(void)
//{
//    LL T, m, n, k, i;
//    for(i=1;i<=2000001;i++)
//        jc[i] = (jc[i-1]*i)%mod;
//    inv[2000001] = Pow(jc[2000001], mod-2);
//    for(i=2000000;i>=1;i--)
//        inv[i] = inv[i+1]*(i+1)%mod;
//    scanf("%d", &T);
//    while(T--)
//    {
//        scanf("%lld%lld%lld", &n, &m, &k);
//        printf("%lld\n", Fan(m-1, m-k)*Fan(n-(m-k), n-m)%mod);
//    }
//    return 0;
//}
//LL Fan(LL n, LL m)
//{
//    LL all;
//    all = n+m;
//    return (C(all, n)-C(all, n+1)+mod)%mod;
//}
//LL Pow(LL a, LL b)
//{
//    LL ans;
//    ans = 1;
//    while(b)
//    {Œ“
//        if(b%2==1)
//            ans = (ans*a)%mod;
//        a = (a*a)%mod;
//        b /= 2;
//    }
//    return ans;
//}
//LL C(LL n, LL m)   
//{
//    LL ans;
//    if(n<m)
//        return 0;
//    ans = jc[n]*inv[m]%mod*inv[n-m]%mod;
//    return ans;
//}