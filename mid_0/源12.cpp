//#include<cmath>
//
//using namespace std;
//
//int main()
//
//{
//
//int n,m,i,j,l,r,x,y,xx,a[55],ans;
//
//cin>>n;
//
//for(i=1;i<=n;++i){
//
//cin>>m;
//
//int a[55]={0};
//
//for(j=1;j<=m;++j){
//
//cin>>xx;
//
//a[xx]++;
//
//}
//
//x=a[0];y=a[49];l=0;r=49;
//
//while(l<r){
//
//if(x>=y){r--;y=y+a[r];}
//
//else{l++;x=x+a[l];}
//
//}
//
//ans=0;
//
//for(j=0;j<=49;++j)ans=ans+abs(l-j)*a[j];
//
//cout<<l<<" "<<ans<<endl;
//
//}
//
//return 0;
//
//}