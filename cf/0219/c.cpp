#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 
int main()
{
     
    freopen("in","r",stdin);
    dl  r,n1,n2,m1,m2;
    cin>>r>>n1>>m1>>n2>>m2;
    dl k =sqrt((n2-n1)*(n2-n1) + (m2-m1)*(m2-m1)) ;
    if(k>=r)
    {

    	printf("%.16lf %.16lf %.16lf\n",n1,m1,r);
    }
    else
    {
    	 dl rr = (k+r)/2;
    	 dl t1,t2;

	 	if(n1==n2&&m1==m2)
	        printf("%lf %lf %lf\n",n1+r/2,m1,r/2);
	    else
	    {
	        
	        printf("%.16lf %.16lf %.16lf\n",(n1-n2)*rr/k+n2,(m1-m2)*rr/k+m2,rr);
	    }





    	// t1 =sqrt(r*r - (m2-m1)*(m2-m1) );
    	// t2 =sqrt(r*r - (n2-n1)*(n2-n1) );
	/*	if(n1>=n2)
   			t1 =sqrt((r*r - (m2-m1)*(m2-m1) + n1*n1 )/4);    
   		else t1 =sqrt((r*r - (m2-m1)*(m2-m1) - n1*n1 /4));   
		if(m1>=m2)
   			t2 =sqrt((r*r - (n2-n1)*(n2-n1) + m1*m1  /4));
   		else t2=sqrt((r*r - (n2-n1)*(n2-n1) - m1*m1  /4));
*/

   /* 
    	 if(n1>=n2)
   			t1 =(t1+n1)/2;
   		else t1 =(t1-n1)/2;
		if(m1>=m2)
   			t2 =(t2+m1)/2;
   		else t2=(t2-m1)/2;
*/
	//	printf("%.16lf %.16lf %.16lf\n",t1,t2,rr);

    }
 
    return 0; 
}


