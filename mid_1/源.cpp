//#include<iostream>
//using namespace std;
//#include<string>
//
//string findLongestPalindrome(string &s)  
//{  
//    int length=s.size();//�ַ�������  
//    int maxlength=0;//������ַ�������  
//    int start;//������ַ�����ʼ��ַ  
//    for(int i=0;i<length;i++)//��ʼ��ַ  
//        for(int j=i+1;j<length;j++)//������ַ  
//        {  
//            int tmp1,tmp2;  
//            for(tmp1=i,tmp2=j;tmp1<tmp2;tmp1++,tmp2--)//�ж��ǲ��ǻ���  
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
//            return s.substr(start,maxlength);//���Ӵ�  
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