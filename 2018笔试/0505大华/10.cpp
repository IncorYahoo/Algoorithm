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
int t;
char a[sz];
typedef struct node
{
    char data;
    struct node * l,* r;
}TreeNode,*Treet;
 
void createTree (Treet & root)
{
    char ch;
    cin>>ch;

//  DBG(ch);
    if('#'==ch) root = NULL;
    else
    {
            root=new TreeNode;
            root->data =ch;
            createTree(root->l);
            createTree(root->r);
    }
//1
//524###36##8##
}
void pT(Treet root)
{
    if(root ==NULL) return ;
    cout<<root->data ;
    pT(root->r);
 
}
void freeTree(Treet   root)
{
    if(root==NULL) return ;
    freeTree(root->l);
    freeTree(root->r);
    delete root;
    //root = NULL; 
}
void preTrave(Treet root)
{
    if(root ==NULL) return ;
    cout<<root->data ;
    preTrave (root->l);
    preTrave (root->r); 
}
int main()
{
      LOACL
    cin>>t;
    while(t--)
    {
 
         Treet root;
         createTree( root ); 
       //   preTrave(root);cout<<endl;
         pT( root);   cout<<endl;
         freeTree(root); 
    }

    return 0;
}  