 #include <bits/stdc++.h>
 using namespace std;
 typedef long long ll ;
 typedef double    dl ;
 #define INF 0x7f
 const dl maxn =1e5+5;  
 #define f(i,l,r) for(int i=l;i<=r;++i)
 #define g(i,l,r) for(int i=l;i>=r;--i)
  
struct node {
	int n;
	struct node* nxt[26];
} ;

int n,m;
char str[50];
node * create()
{
	node * p = (node*)malloc(sizeof(node));
	p->n=0;
	memset(p->nxt,0,sizeof(p->nxt));

	return p;
}
node* phead = create();;
void add()
{
	int nlen = strlen(str);
	node * p = phead;
	p->n++;

	f(i,0,nlen-1)
	{
		if(p->nxt[str[i]-'a']==0)
			p->nxt[str[i]-'a'] = create();
		p=p->nxt[str[i]-'a'];
		p->n++;
	}
}
 int selct()
 {
 	node * p =  phead;
 	int nlen = strlen(str);
 	f(i,0,nlen-1)
	{
		p=p->nxt[str[i]-'a'];
		if(p==NULL)
			return 0;
	}
	return p->n;
 }
 
 int main()
 {
      
    // freopen("in","r",stdin);
 	 cin>>n;
 	 f(i,1,n)
 	 {
 		 
 	 	cin>>str;
 	 	add( );
 	}
 	cin>>m;
 	f(i,1,m)
 	{
 		 
 	 	cin>>str;
 		cout<<selct( )<<endl;
 	}
  
 
     return 0; 
 }


 
