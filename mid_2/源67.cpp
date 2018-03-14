//#include<iostream>
//#define ll long long
//using namespace std;
//ll a[100025],b[100025];
//ll k;
//ll exgcd(ll a,ll b,ll &x,ll &y)
//{
//    if(b==0)
//    {
//        x=1;
//        y=0; 
//        return a;
//    }
//    ll r=exgcd(b,a%b,x,y);
//    ll t=x;
//    x=y;
//    y=t-a/b*y;
//    return r;
//}
//ll Chinese_Remainder()
//{
//    ll m1,r1,m2,r2,flag,i,d,x,y,c,t;
//    m1=a[0],r1=b[0];
//    flag=0;
//    for(i=1;i<k;i++)
//    {
//        m2=a[i],r2=b[i];
//        if(flag)
//        continue;
//        d=exgcd(m1,m2,x,y);
//        c=r2-r1;
//        if(c%d)
//        {
//            flag=1;
//            break;
//        }
//        t=m2/d;
//        x=(c/d*x%t+t)%t;
//        r1=m1*x+r1;
//        m1=m1*m2/d;
//    }
//    if(flag)
//    return -1;
//    if(k==1&&r1==0)
//    return m1;
//    return r1;
//      
//}
//int main()
//{
//      
//    cin>>k;
// 
//    for(ll i=0;i<k;i++)
//	  cin>>a[i]>>b[i];
//      
//    cout<<Chinese_Remainder()<<endl;
//      
//    return 0;
//}