#include<bits/stdc++.h>
using namespace std; 

struct node{
    int v,ai,bi;
    bool operator <(const node & b)const {return v>b.v;}
};



int n;
int a[100005],b[100005];
priority_queue<node>q;

int main(){
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)scanf("%d",&a[i]);
    for(i=1;i<=n;i++)scanf("%d",&b[i]);

    for(i=1;i<=n;i++)q.push((node){a[1]+b[i],1,i});

    node t;
    for(i=1;i<=n;i++){
        t=q.top();
        printf("%d ",t.v);
        q.pop();
        q.push((node){a[t.ai+1]+b[t.bi],t.ai+1,t.bi});
    }
 
    return 0;
}