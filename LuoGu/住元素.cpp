 
#define f(i,l,r) for(int i=l;i<=r;++i)  
int mahorityElement(vector<int> & v)
{
	int m,c=0;
	int len = v.size();
	f(i,0,len-1)
		c==0?m=v[i],c=1:m==v[i]?c++:c--;
	return m;
}