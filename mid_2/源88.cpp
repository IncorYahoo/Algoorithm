//#include<iostream>
//using namespace std;
//char s[60][60];
//int c0,c1,n;
//void dfs(int x,int y){
//    if (x>=n||y>=n||x<0||y<0||s[x][y]=='.') return;
//    (x+y)&1?++c0:++c1;
//    s[x][y]='.';
//    dfs(x+1,y);
//    dfs(x-1,y);
//    dfs(x,y+1);
//    dfs(x,y-1);
//}
//int main(){
//    int t;
//    scanf("%d",&t);
//    for (int i=1; i<=t; ++i){
//        scanf("%d",&n);
//        int ans=0;
//        for (int i=0; i<n; ++i) scanf("%s",s[i]);
//        for (int i=0; i<n; ++i)
//        for (int j=0; j<n; ++j)
//        if (s[i][j]=='#'){
//            c0=0; c1=0;
//            dfs(i,j);
//            ans+=min(c0,c1);
//        }
//        printf("Case %d: %d\n",i,ans);
//    } 
//
//	 
//
//
//}