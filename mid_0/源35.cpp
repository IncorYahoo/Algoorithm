//#include<iostream>   
//using namespace std;  
//const int n=200000;  
//long prime[n]={0},num_prime=0;//num_pirme��¼��������  
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
//            a[i*prime[j]]=1;//������Ϊ1��ͬʱ��prime[j]�Ǻ���i*prime[j]����С������  
//            if(!(i%prime[j]))//����һ��������������͸ú����ĳ˻�����һ������ĺ����ͱ���С��������˵õ�  
//                break;  
//        }  
//    }  
//    for(i=0;i<num_prime;i++)//���  
//    {  
//        if(i%10==0)printf("\n");  
//    printf("%3d ",prime[i]);  
//    }  
//        printf("\n");  
//		 system("pause");
//    return 0;  
//  
//}  