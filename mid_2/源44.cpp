//#include<stdio.h>
//int main()
//{
//    long long int diedai(long long int n);
//    long long int n;
//    while(scanf("%lld",&n)!=EOF)
//    {
//        if(n<=0||n>50)
//            break;
//    printf("%lld\n",diedai(n));
//    }
//    return 0;
//}
//long long int diedai(long long int n)
//{
//    int i;
//    long long int temp=0,a=0,b=1,c=1;
//    if(n==1)
//        return 0;
//    else if(n==2)
//        return 1;
//    else if(n==3)
//        return 1;
//    else
//    {
//      for(i=4;i<=n;i++)
//      {
//          temp=a+b+c;
//          a=b;
//          b=c;
//          c=temp;
//      }
//        return temp;
//    }
//    return 0;
//}