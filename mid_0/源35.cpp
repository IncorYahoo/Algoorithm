//#include<iostream>   
//using namespace std;  
//const int n=200000;  
//long prime[n]={0},num_prime=0;//num_pirme记录素数个数  
//int main()  
//{  
//    int m;  
//    cin>>m;  
//    int a[n]={1,1},i,j;  
//    for(i=2;i<m;i++)  
//    {  
//        if(!a[i])  
//            prime[num_prime++]=i;  
//        for(j=0;j<num_prime && i*prime[j]<m;j++)  
//        {  
//            a[i*prime[j]]=1;//合数标为1，同时，prime[j]是合数i*prime[j]的最小素因子  
//            if(!(i%prime[j]))//即比一个合数大的质数和该合数的乘积可用一个更大的合数和比其小的质数相乘得到  
//                break;  
//        }  
//    }  
//    for(i=0;i<num_prime;i++)//输出  
//    {  
//        if(i%10==0)printf("\n");  
//    printf("%3d ",prime[i]);  
//    }  
//        printf("\n");  
//		 system("pause");
//    return 0;  
//  
//}  