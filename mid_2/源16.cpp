//
//#include<stdio.h>
//#include<algorithm>
//#define go(i,a,b) for(int i=a;i<=b;i++)
//using namespace std;
//struct E{int from,to,dis;}g[50040];
//int n,m,fa[2502],cnt=0,together=0,buldings=0,briges=0,length=0;
//char mp[520][520];
//int A(int x){return x>=0?x:-x;}
//int chicken(int x,int y,int x1,int y1){
//	if(x==x1&&A(y-y1)==1)return -1;
//	if(y==y1&&A(x-x1)==1)return -1;
//	if(A(x-x1)==1&&A(y-y1)==1)return -1;
//	if(A(x-x1)<=1)return A(y-y1);
//	if(A(y-y1)<=1)return A(x-x1);
//	return 0;}
//int fifa(int x){
//	if(fa[x]==x)return x;
//	return fifa(fa[x]);}
//void comb(int x,int y){
//	int fx=fifa(x),fy=fifa(y);
//	if(fy==fx)return;
//	fa[fifa(x)]=fifa(y);
//	together++;}
//bool cmp(E a,E b){return a.dis<b.dis;}
//int main()
//{
//    scanf("%d%d",&n,&m);
//    go(i,1,n)scanf("%s",mp[i]+1);
//    go(i,1,n)go(j,1,m)if(mp[i][j]=='#')buldings++;
//    go(i,1,n*m)fa[i]=i;
//    go(i,1,n)go(j,1,m){
//      if(mp[i][j]=='.')continue;
//      go(x,1,n)go(y,1,m){
//	      if(mp[x][y]=='.')continue;
//      	  if(x<i)continue;
//      	  if(x==i&&y<=j)continue; 
//    	  int a=(i-1)*m+j,b=(x-1)*m+y;
//    	  int sign=chicken(i,j,x,y);
//    	  if(sign==-1)comb(a,b);
//    	  if(sign>0){
//    		  cnt++;
//    		  g[cnt].from=a;
//    		  g[cnt].to=b;
//    		  g[cnt].dis=sign-1;}}}
//    printf("%d\n",buldings-together);
//    sort(g+1,g+cnt+1,cmp);
//    go(i,1,cnt){
//	  int f1=fifa(g[i].from),f2=fifa(g[i].to);
//      if(f1!=f2)comb(f1,f2),length+=g[i].dis,briges++;}
//    printf("%d %d",briges,length);
//	return 0;
//}