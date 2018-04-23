 #include<bits/stdc++.h>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
          freopen("out","w",stdout); 
 
 #define FOR(i, a, b)  for(int i=(a); i<(b); i++)
 #define REP(i, a, b)  for(int i=(a); i<=(b); i++)
 #define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


  

 
int getPartion(int *array, int low, int high)
{
    int key = array[low];
    while (low < high)
    {
        while (low < high && key <= array[high]) //如果array[high]大于键值，那么本就应该在键值右边
            high--;  //因此将high下标向前移动，直至找到比键值小的值，此时交换这两个值
        swap(array[low], array[high]);

        while (low < high && key >= array[low])
            low++;
        swap(array[low], array[high]);
    }
    return low;//返回key值的下标
}

int getp(int  * arr,int l,int r)
{
    int key = arr[l];
    while(l<r)
    {
        while(l<r && key<=arr[r])
            r--;
        swap(arr[key],arr[l]);
        while(l<r&& key>arr[l])
            l++;
        swap(arr[l],arr[r]);
    }
    
    return l;
}

void QuitSort(int *buf,int l,int r)
{
    if(l<r)
    {
        int mid = getp(buf,l,r);
        QuitSort(buf,l,mid-1);
        QuitSort(buf,mid+1,r);
    }

}
 
 int main()
 {
     LOACL
     



     return 0;
 }