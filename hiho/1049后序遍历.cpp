 #include<bits/stdc++.h>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
 			freopen("out","w",stdout); 
 typedef long long ll; 
 
void ss1(string   pre,string  mid)
{
	int len =pre.size();
 
	if(len > 0)
	{
		char ch  = pre[0];

		int k= mid.find(ch); 
//		if(k>0)
//		{
			ss1(pre.substr(1,k),mid.substr(0,k));
			ss1(pre.substr(k+1),mid.substr(k+1)); 
//		}
		cout<<ch;
	}
 
}
void ss(  char * pre,  char *in,int n )
{
	if(n>0)
	{
		int i= 0 ;
		while(in[i]!=pre[0])i++;
		ss(pre+1,in,i);
		ss(pre+i+1,in+i+1,n-i-1);
		cout<<pre[0];
	}
}

 int main()
 {
 	LOACL
 	string pre,mid;

 //	char pre[1<<15],mid[1<<15];
 	cin>>pre>>mid;
 	ss1(pre,mid);	 
 //	ss(pre ,mid ,strlen(pre));
 	return 0;
 }
