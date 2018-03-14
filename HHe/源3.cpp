//#include<stdio.h>
//#include<string.h>
//#include<iostream>
//#include<algorithm>
//#define MAXN 2000000+5
//using namespace std;
//char arr[MAXN],s[MAXN];
//int p[MAXN],len;
//void Manacher()
//{
//    /* 先将奇偶情况变成奇情况 */
//    len=strlen(arr);
//    s[0]='$';    // 防止越界
//    s[1]='#';
//    for(int i=0;i<len;i++)
//    {
//        s[i*2+2]=arr[i];
//        s[i*2+3]='#';
//    }
//    len=len*2+2;
//    s[len]='\0';
//    /* 算法核心 */
//    int maxx=0,id=0;
//    for(int i=2;i<len;i++)
//    {
//        if(maxx>i)
//            p[i]=min(p[2*id-i],maxx-i);
//        // 2*id-i是关于当前最长字符串关于中点与i对应的位置
//        // 求的i位置如果在最长字符串里面就相当于在以id为中心，
//        // 与i对应的位置的字符串是相同的
//        // maxx-i是如果第i点的回文字符串长度超过了最长字符串的长度，
//        // maxx外的字符串不确定，所以必须从长度为maxx-i开始
//        else
//            p[i]=1;
//        while(s[i+p[i]]==s[i-p[i]])
//            p[i]++;
//        if(i+p[i]>maxx)
//        {
//            maxx=i+p[i];
//            id=i;
//        }
//    }
//    for(int i=2;i<len*2+2;i++)
//        cout<<p[i]<<" ";cout<<endl;
//
//}
//int main()
//{
//    freopen("in","r",stdin);
//    int n;
//    scanf("%d",&n);
//    while(n--)
//    {
//        memset(p,0,sizeof(p));
//        scanf("%s",arr);
//        Manacher();
//        printf("%d\n",p[max_element(p,p+len)-p]-1); // max_element(p,p+len)//函数是求数组中最大值的坐标
//    }
//    return 0;
//}