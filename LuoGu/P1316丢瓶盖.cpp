#include<cstdio>
#include<algorithm>

using namespace std;
int a,b,c[100005],l,r,mid;

bool judge(int x){//判断距离为x是否可行
    int k=1,t=1;
    for(int i=1;i<=a;i++){
        if(c[i]-c[k]>=x){
            ++t;
            k=i; 
        }
    }//贪心判断是否可以分成b段
    if(t>=b) return true;
    else return false;
}
int main()
{
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++) scanf("%d",&c[i]);
    sort(c+1,c+1+a);r=c[a]-c[1];//右端点初始化
    while(l<=r)
    {
        mid=(l+r)/2;
        if(judge(mid)==1) l=mid+1;
        else r=mid-1;
    }
    printf("%d",r);
    return 0;
} 