#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";


const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

//#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
int a[]={
    2,3,5,7,11,13,17,19,23,29,31,37,41,
    43,47,53,59,61,67,71,73,79,83,89,97,
    101,103,107,109,113,127,131,137,139,149,
    151,157,163,167,173,179,181,191,193,197,199,
    211,223,227,229,233,239,241,251,257,263,269,271,
    277,281,283,293,307,311,313,317,331,337,347,349,353,
    359,367,373,379,383,389,397,401,409,419,421,431,433,439,
    443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,
    547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,
    643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,
    757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,
    859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,
    983,991,997
};

int main()
{
    LOACL
  //  cout<<sizeof(a)/sizeof(a[0])<<endl;
  //  cout<<a[0]<<endl;
   // cout<<a[167]<<endl;
    int n ;
    int ans=0;
    cin>>n;
    REP(i,0,167)
    {
        if(a[i]>=n)break;
        REP(j,0,167) 
            if(n-a[i]==a[j]) 
            {
               // cout<<a[i] <<" "<<a[j]<<endl;
                if(a[i]==a[j]) ans++;
                ans++;
            }
    }
    cout<<ans/2<<endl;





    /*
    int  n =1000;
    REP(i,2,n)
    {
        bool flag = true;
        REP(j,2,i-1)
        {
            if(i%j==0)
                flag =false;
               
            else  continue;
        }
        if(flag) cout<<i<<",";
    }
*/









    return 0;
}