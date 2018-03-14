//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//  
//    int ff(string &s)  
//    {  
//        const int length=s.size();  
//        int maxlength=0;  
//        int start;  
//        bool P[50][50]={false};  
//        for(int i=0;i<length;i++)//初始化准备  
//        {  
//            P[i][i]=true;  
//            if(i<length-1&&s.at(i)==s.at(i+1))  
//            {  
//                P[i][i+1]=true;  
//                start=i;  
//                maxlength=2;  
//            }  
//        }  
//        for(int len=3;len<=length;len++)//子串长度  
//            for(int i=0;i<=length-len;i++)//子串起始地址  
//            {  
//                int j=i+len-1;//子串结束地址  
//                if(P[i+1][j-1]&&s.at(i)==s.at(j))  
//                {  
//                    P[i][j]=true;  
//                    maxlength=len;  
//                    start=i;  
//                }  
//            }  
//        if(maxlength>=2)  
//            return maxlength  ;
//        return 1;  
//    }  
//void Reverse(string & str)  
//{  
//	 int length =str.length();
//
//	for (int i = 0; i < length / 2; ++i)  
//	{  
//		str[i] = str[i] ^ str[length - 1 - i];  
//		str[length - 1 - i] = str[i] ^ str[length - 1 - i];  
//		str[i] = str[i] ^ str[length - 1 - i];  
//	}  
//  
//}  
//int ss(  string & left,  string & right)
//{
//	Reverse(right);
//	int dp[10001][10001]={0};
//	for(int i=0;i<left.size();i++)
//		dp[i][i]=1;
//	for(int i=0;i<left.size();i++)
//		for(int j=0;j<right.size();j++)
//		{
//			if(left[i]==right[j])dp[i][j]=dp[i-1][j-1]+1;
//
//		}
//
//		int maxn=0;
//
//	for(int i=0;i<left.size();i++)
//			for(int j=0;j<right.size();j++)
//		{
//			maxn=maxn>dp[i][j]?maxn:dp[i][j];
//
//		}
//			return maxn;
//}
//int main()
//{
//	int n;
//	string str ,strb;
//	cin>>n>>str>>strb;
//	cout<<max(max(ff(str),ff(strb)),ss(str,strb))<<endl;;
//
//
//	system("pasue");
//
//
//
//}
