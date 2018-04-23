#include<bits/stdc++.h>
using namespace std;
int m,sum=1,a[100005];
int main()
{  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
    cin>>m;
    while(m>0)//核心
      {
          m%2==0?a[sum]=m/2:a[sum]=m/2+1;//这一坨等价于if(m%2==0) a[sum]=m/2; else a[sum]=m/2+1;
        m/=2;//分治，防止死循环;
          sum++;
      }
    sum--;//sum会多出1
    sort(a+1,a+sum+1);//排序
    cout<<sum<<endl;
    for(int i=1;i<=sum;i++)
      cout<<a[i]<<" ";  //愉快输出
    return 0;
}