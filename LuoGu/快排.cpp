 #include<iostream>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
 			freopen("out","w",stdout); 
 
 const int  inf = 987654321;
 const int sz = 1e6 + 5;
 const int mod = 1e9 + 7;
 const int sqrtn = 300; 
 
 #define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
 #define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
 #define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
 #define CLR(arr,val) memset(arr,val,sizeof(arr)) 
 typedef long long ll; 
 int n,a[sz];
 int readit()
{
    char x;
    int t=0;
    x=getchar();
    while(x<'0'||x>'9')x=getchar();
    while(x>='0'&&x<='9')
    {
        t=t*10+x-'0';
        x=getchar();
    }
    return t;
}

 void qsort(int a[],int low,int high)
 {
 	if(low>=high)return ;
 	int l = low;
 	int r =high;
 	int key = a[l];
 	while(l<r)
 	{
 		while(l<r&&a[r]>=key)
 			--r;
 		a[l]=a[r];
 		while(l<r&&a[l]<=key)
 			++l;
 		a[r]=a[l];
 	}
 	a[l]=key;
 	qsort(a,low,l-1);
 	qsort(a,l+1,high);
 }
 int main()
 {
 	LOACL
 	n=readit();
 	f(i,1,n)  a[i]=readit();
 	qsort(a,1,n);
 	f(i,1,n-1)  cout<<a[i]<<" ";
 	cout<<a[n]<<endl;
 	return 0;
 }