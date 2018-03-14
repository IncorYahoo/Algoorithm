//#include<iostream>
//using namespace std;
//#include<string>
//
//string findLongestPalindrome(string &s)  
//{  
//    int length=s.size();//字符串长度  
//    int maxlength=0;//最长回文字符串长度  
//    int start;//最长回文字符串起始地址  
//    for(int i=0;i<length;i++)//起始地址  
//        for(int j=i+1;j<length;j++)//结束地址  
//        {  
//            int tmp1,tmp2;  
//            for(tmp1=i,tmp2=j;tmp1<tmp2;tmp1++,tmp2--)//判断是不是回文  
//            {  
//                if(s.at(tmp1)!=s.at(tmp2))  
//                    break;  
//            }  
//            if(tmp1>=tmp2&&j-i>maxlength)  
//            {  
//                maxlength=j-i+1;  
//                start=i;  
//            }  
//        }  
//        if(maxlength>0)  
//            return s.substr(start,maxlength);//求子串  
//        return NULL;  
//}  
//int main()
//{
//
//
//
//	system("pause");
//
//}