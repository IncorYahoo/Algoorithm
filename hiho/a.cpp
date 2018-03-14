#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
      freopen("out","w",stdout); 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
int heap[100005], size = 0;
typedef long long ll; 
void push(int x)
{
    heap[++size] =x ;
    int i=size;
    while(i>1 && x > heap[i>>1])
    {
        heap[i]=heap[i>>1];
        i>>=1;
    }
    heap[i]=x;
} 
int pop()
{
  int x = heap[1];
  int t = heap[size--];
  int i=1;
  for(i=1;i*2<=size;)
  {
    int a = 2*i,b=2*i+1;
    if(heap[a]<heap[b])a=b;
    if(heap[a]<t)break;
    heap[i]=heap[a];
    i=a;
  }
  heap[i]=t;
 


  return x;
} 
int main(){
  LOACL
    int n, w;
    char c;
    cin >> n;
    while(n--){
        cin >> c;
        if(c == 'A'){
            cin >> w;
            push(w);
        } else {
            cout << pop() << endl;
        }
    }
    return 0;
}