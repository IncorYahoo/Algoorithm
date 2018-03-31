//  #include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<map>
//#include<queue>
//#include<algorithm>
//#include<hash_map>
//
//
//
///*
//小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,他马上就写出了正确答案是100
//。但是他并不满足于此,他在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。没多久
//他就得到另一组连续正数和为100的序列:18,19,20,21,22。现在把问题交给你,你能不能也很快的找出所有和为S的连续正数序列?
//Good Luck!
//输出描述:
//输出所有和为S的连续正数序列。序列内按照从小至大的顺序，序列间按照开始数字从小到大的顺序
//*/
////class Solution {
////public:
////    vector<vector<int> > FindContinuousSequence(int sum) {
////		int l,r,m_snum;
////		l=1,r=1;m_snum =1;
////		  vector<vector<int> > v;
////		while(l<=r)
////		{
////			r++;
////			m_snum +=r;
////			while(m_snum> sum)
////			{
////				m_snum-=l;
////				l++;
////			}
////			if(m_snum == sum)
////			{
////				  vector<int> tmp;
////                for(int i = l;i <= r;i ++)  tmp.push_back(i);
////                v.push_back(tmp);
////			}
////		}
////		 
////        return v;
////    }
////};
///*
//题目描述
//求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
//*/
////typedef int (*func)( int );
////class Solution {
////public:
////	static int s (int n)
////	{
////		return 0;
////	}
////   static  int Sum_Solution(int n) {
////		static func f[2] = {s,Sum_Solution};
////        return n+f[!!n](n-1);
////    }
////};
////输入一个递增排序的数组和一个数字S，在数组中查找两个数，是的他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。
////输出描述:
////对应每个测试案例，输出两个数，小的先输出。
////
////class Solution {
////public:
////    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
////        vector<int> v;
////		if(array.size()<2)return v;
////	
////		int i=0;
////		int j=array.size()-1;
////		int snum;
////
////		while(i<j)
////		{
////			snum = array[i]+array[j];
////			if (snum > sum)
////					j--;
////			else if (snum < sum)
////				i++;
////			else
////			{
////				v.push_back(array[i]);
////				v.push_back(array[j]);
////				break;
////			} 
////		}
////		return v;
////    }
////};
////
////汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。
////	对于一个给定的字符序列S，
////	请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,要求输出循环左移3位后的结果，
////	即“XYZdefabc”。是不是很简单？OK，搞定它！
////
////class Solution {
////public:
////    string LeftRotateString(string str, int n) {
////        string  s ;
////	
////		for(int i=n;i<str.size();i++)
////		{
////			s += str[i];
////		}
////		for(int i=0;i< n;i++)
////			s += str[i];
////		return s;
////    }
////};
////牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。同事Cat对Fish写的内容颇感兴趣，
////	有一天他向Fish借来翻看，但却读不懂它的意思。例如，“student. a am I”。
////	后来才意识到，这家伙原来把句子单词的顺序翻转了，正确的句子应该是“I am a student.”。
////	Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？
////
////	class Solution {
////public:
////    string ReverseSentence(string str) {
////           string res ,tmp;
////		   for(unsigned int i=0; i< str.size();i++)
////		   {
////			   if(str[i] == ' ')
////			   {
////				   res = " " +tmp +res;
////				   tmp="";
////			   }
////			   else{
////				   tmp+=str[i];
////			   }
////		   }
////		   if(tmp.size() > 0)
////			   res= tmp+res;
////		   return res;
////
////    }
////};
////
////	LL今天心情特别好,因为他去买了一副扑克牌,发现里面居然有2个大王,2个小王(一副牌原本是54张^_^
////		)...他随机从中抽出了5张牌,想测测自己的手气,看看能不能抽到顺子,如果抽到的话,他决定去买体育彩票
////		,嘿嘿！！“红心A,黑桃3,小王,大王,方片5”,“Oh My God!”不是顺子.....LL不高兴了,他想了想,决定大\小 
////		王可以看成任何数字,并且A看作1,J为11,Q为12,K为13。上面的5张牌就可以变成“1,2,3,4,5”(大小王分别看作2和4),
////		“So Lucky!”。LL决定去买体育彩票啦。
////		现在,要求你使用这幅牌模拟上面的过程,然后告诉我们LL的运气如何。为了方便起见,你可以认为大小王是0。
////		class Solution {
////public:
////    bool IsContinuous( vector<int> numbers ) {
////		::sort(numbers.begin(),numbers.end());
////		int k=0;
////		for(int i=0;i<numbers.size();i++)
////		{
////			if(numbers[i] ==0)
////				k++;
////			else{
////				if( i!= 0  && numbers[i] !=0   &&numbers[i] == numbers[i-1] )
////					return false;
////			}
////		}
////			
////		//有K张会
////		int s= 0;
////		for(int i=k+1;i<numbers.size();i++)
////		{
////			s+=(numbers[i] - numbers[i-1]);
////		}
////		k;
////		int s2 = s-(numbers.size()-k);
////		if(k> s2 )
////			return true;
////		else
////		{
////			return false;
////		}
////	//	return (k >= (s-(numbers.size()-k)));
////		
////    }
////};
////
////int main()
////{
////	vector<int> v;
////v.push_back(1);
////v.push_back(3);
////v.push_back(2);
////v.push_back(4);
////v.push_back();
////
//// Solution s;
//// bool ret = s.IsContinuous(v);
//// ret;
////
////
////
////
////每年六一儿童节,牛客都会准备一些小礼物去看望孤儿院的小朋友,
////	今年亦是如此。HF作为牛客的资深元老,自然也准备了一些小游戏。
////	其中,有个游戏是这样的:首先,让小朋友们围成一个大圈。然后,他随机指定一个数m
////	,让编号为0的小朋友开始报数。每次喊到m-1的那个小朋友要出列唱首歌
////	,然后可以在礼品箱中任意的挑选礼物,并且不再回到圈中,从他的下一个小朋友开始,
////	继续0...m-1报数....这样下去....直到剩下最后一个小朋友,可以不用表演,
////	并且拿到牛客名贵的“名侦探柯南”典藏版(名额有限哦!!^_^)。请你试着想下,哪个小朋友会得到这份礼品呢？
////	(注：小朋友的编号是从0到n-1)
////class Solution {
////public:
////    int LastRemaining_Solution(int n, int m)
////    {
////	    if(n==0) return -1;
////        int s=0;
////        for(int i=2;i<=n;i++){
////            s=(s+m)%i;
////			cout<<s <<" ";
////        }
////        return s;
////    }
////};Solution s;
////	s.LastRemaining_Solution(5,2);
////写一个函数，求两个整数之和，要求在函数体内不得使用+、-、*、/四则运算符号。
////class Solution {
////public:
////    int Add(int num1, int num2)
////    {
////		 return num2 ? Add(num1^num2, (num1&num2)<<1 ) : num1  ; 
////    }
////};
////	int a =1 ;
////	int b=8;
////	int c= a^b;
//// 	c= (a&b)<<1;
////	c;
////
////
////将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0
////输入描述:
////输入一个字符串,包括数字字母符号,可以为空
////输出描述:
////如果是合法的数值表达则返回该数字，否则返回0
////示例1
////输入
////
////+2147483647
////    1a33
////输出
////
////2147483647
////    0
////
////class Solution {
////public:
////    int StrToInt(string str) {
////       int n = str.size(), s = 1;
////        int res = 0;
////        if(!n) return 0;
////        if(str[0] == '-') s = -1;
////        for(int i = (str[0] ==  '-' || str[0] == '+') ? 1 : 0 ; i < n; ++i)
////		{
////            if(!('0' <= str[i] && str[i] <= '9')) return 0;
////            res = (res << 1) + (res << 3) + (str[i] & 0xf);//res=res*10+str[i]-'0';
////        } 
////        return res *s ;
////	}
////};
////class Solution  {
////public:
////    int StrToInt(string str) {
////	int n= str.size();
////	int s =1;
////	int i=0;
////	long long res =0;
////	if(str[0] == '+'|| str[0]=='-') i=1; 
////	if(str[0]=='-')s=-1;
////	for(;i<n;i++)
////	{
////		if(str[i] > '0' && str[i] <'9')
////			res=(res<<3)+(res<<1 )+(str[i]-'0');
////		else{
////		return 0;
////		}
////	}
////	return res*s ;
////	
////	}
////};
////int main()
////{
////	string str("1a33");
////	 Solution s;
////	 s.StrToInt(str);
////	
////
////在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，
////	但不知道有几个数字是重复的。也不知道每个数字重复几次。
////	请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}
////，那么对应的输出是第一个重复的数
////
////	class Solution {
////public:
//// 
////    bool duplicate(int numbers[], int length, int* duplication) {
////        map<int,int> m;
////		for(int i=0;i < length ; i++)
////		{
////			m[numbers[i]]++;
////			if(m[numbers[i]]==2 )
////			{
////				*duplication =  numbers[i];
////				return true;
////			}
////				
////		}
////		 return false;
////    }
////};
//
////给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],
////其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法
////
////class Solution {
////public:
////    vector<int> multiply(const vector<int>& A) {
////    
////
////
////
////
////
////    }
////};
////题目描述
////请实现一个函数用来匹配包括'.'和'*'的
////正则表达式。模式中的字符'.'表示任意一个字符，
////而'*'表示它前面的字符可以出现任意次（包含0次）。 在本题中，
////匹配是指字符串的所有字符匹配整个模式。例如，字符串"aaa"   与模式"a.a"和"ab*ac*a"匹配，
////但是与"aa.a"和"ab*a"均不匹配
//
////
////
////class Solution {
////public:
////	bool match(char* str, char* pattern)
////	{
////		if(str[0] == 0 && pattern[0] == 0)	return true;
////		if(pattern[0] !=0 && pattern[1] =='*')
////			if(match(str,pattern+2))return true;
////		if((pattern[0]=='.' &&str[0] )|| (str[0] == pattern[0] ))
////		{
////			 if (match(str + 1, pattern + 1))
////                return true;
////            if (pattern[1] == '*' && match(str + 1, pattern))
////            {
////                return true;
////            }
////		}
////		return false;
////
////
////
////	}
////  bool match1(char* str, char* pattern)
////    {
////        if (pattern[0] == 0 && str[0] == 0)
////        {
////            return true;
////        }
////   
////        if (pattern[0] != 0 && pattern[1] == '*')
////        {
////            if (match(str, pattern + 2))
////                return true;
////        }
////   
////        if ((pattern[0] == '.' && str[0]) || str[0] == pattern[0])
////        {
////            if (match(str + 1, pattern + 1))
////                return true;
////            if (pattern[1] == '*' && match(str + 1, pattern))
////            {
////                return true;
////            }
////        }
////   
////        return false;   
//////    }
//////};
////
////请实现一个函数用来判断字符串是否表示数值（包括整数和小数）
////	。例如，字符串"+100","5e2","-123","3.1416"
////	和"-1E-16"都表示数值。 但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是
////class Solution {
////public:
////    bool isNumeric(char* str)
////    {
////		   if(string==NULL)
////            return false;
////        if(*string=='+'||*string=='-')
////        {
////            string++;
////        }
////        if(*string=='\0')
////            return false;
////        int d=0,num=0,nume=0;
////        while(*string!='\0')
////        {
////            if(*string>='0'&&*string<='9')
////            {
////                string++;
////                num=1;
////            }
////            else if(*string=='.')
////            {
////                if(d>0||nume>0)
////                    return false;
////                string++;
////                d=1;
////            }
////            else if(*string=='e'||*string=='E')
////            {
////                if(num==0||nume>0)
////                    return false;
////                string++;
////                nume++;
////                if(*string=='+'||*string=='-')
////                    string++;
////                if(*string=='\0')
////                    return false;
////            }
////            else
////                return false;
////        }
////        return true;
////    }
////    
////
////};
///*
//请实现一个函数用来找出字符流中第一个只出现一次的字符。例
//如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。
//当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。
//输出描述:
//如果当前字符流没有存在出现一次的字符，返回#字符。
//
//
//上一题 下一题 
// 讨论
// 排行
// 我的提交
//C/C++(clang++ 3.3)
//
//1
//class Solution
//2
//{
//3
//private:
//4
//    map<char,int> m;
//5
//public:
//6
//  //Insert one char from stringstream
//7
//    void Insert(char ch)
//8
//    {
//9
//         m[ch]++;
//10
//    }
//11
//  //return the first appearence once char in current stringstream
//12
//    char FirstAppearingOnce()
//13
//    {
//14
//        auto ite= m.begin();
//15
//        while(ite != m.end())
//16
//        {
//17
//            if( (*ite).second  ==1) return (*ite).first;
//18
//            ite++;
//19
//        }
//20
//        return '#';
//21
//    }
//22
//​
//23
//};
//保存并调试 求助
//不通过
//您的代码已保存
//答案错误:您提交的程序没有通过所有的测试用例
//case通过率为0.00%
//
//测试用例:
//"google"
//
//对应输出应该为:
//
//"ggg#ll"
//
//你的输出为:
//
//"ggg#le"
////*/
////#include<hash_map>
////class Solution
////{
////private:
////	hash_map<char,int> m;
////public:
////  //Insert one char from stringstream
////    void Insert(char ch)
////    {
////         m[ch]++;
////    }
////  //return the first appearence once char in current stringstream
////    char FirstAppearingOnce()
////    {
////		auto ite= m.begin();
////		while(ite != m.end())
////		{
////			if( (*ite).second  == 1) return (*ite).first;
////			ite++;
////		}
////		return '#';
////    }
////
//////};
////class Solution
////{
////private:
////	int m_ch[256];
////	queue<char> que;
////
////
////public:
////  //Insert one char from stringstream
////    void Insert(char ch)
////    {
////         m_ch[ch]++;
////		 que.push(ch);
////    }
////  //return the first appearence once char in current stringstream
////    char FirstAppearingOnce()
////    {
////		while(!que.empty())
////		{
////			if(m_ch[que.front()] ==1)
////			return que.front();
////					que.pop();
////		}
////		return '#';
////    }
////
////};
///*
//一个链表中包含环，请找出该链表的环的入口结点。
////*/
////struct ListNode {
////    int val;
////    struct ListNode *next;
////    ListNode(int x) :
////        val(x), next(NULL) {
////    }
////};
////
////class Solution {
////public:
////	map< ListNode*,int> m;
////public:
////    ListNode* EntryNodeOfLoop(ListNode* pHead)
////    {
////		m.clear();
////		while(pHead->next)
////		{
////			m[pHead]++;
////			if(m[pHead] == 2 )
////				return pHead ;
////			pHead=pHead->next;
////		}
////		return NULL;
////    }
////};
///*题目描述
//在一个排序的链表中，存在重复的结点，
//请删除该链表中重复的结点，重复的结点不保留
//，返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
//
//*/
////
////struct ListNode {
////    int val;
////    struct ListNode *next;
////    ListNode(int x) :
////        val(x), next(NULL) {
////    }
////};
////class Solution {
////public:
////    ListNode* deleteDuplication(ListNode* pHead)
////    {
////        if(pHead==NULL||pHead->next==NULL)
////			return pHead;
////		ListNode* h =new ListNode(-1);
////		h->next=pHead;
////		ListNode* p,*q;
////		p =h;
////		q=p->next;
////		while(q)
////		{
////			while(q->next && (q->next->val == q->val))
////			{
////				q=q->next;
////			}
////			if(p->next  ==q   )
////			{
////			      p = q;
////                q = q->next;
////			}
////			else{
////			   q = q->next;
////                p->next = q;
////			}
////		}
////		return h->next;
////    }
////};
////
////	/*ListNode l1(1), l2(2), l3(3), l4(4), l5(5) ;
////	ListNode l6(3), l7(4);
////	l1.next=&l2;
////	l2.next=&l3;
////	l3.next=&l6;
////	l6.next=&l4;
////	l4.next=&l7;
////	l7.next=&l5;
////	l5.next=NULL;*/
////	ListNode  * a = new ListNode (1);
////	ListNode  * b = new ListNode (1);
////	ListNode  * c = new ListNode (1);
////	a->next=b;
////	b->next=c;
////	c->next=NULL;
////
////	Solution s;
////	ListNode  * ret =s.deleteDuplication(a);
////	ret ;
///*
//给定一个二叉树和其中的一个结点，
//请找出中序遍历顺序的下一个结点并且返回。注意，
//树中的结点不仅包含左右子结点，同时包含指向父结点的指针。
//*/	
//
//struct TreeLinkNode {
//    int val;
//    struct TreeLinkNode *left;
//    struct TreeLinkNode *right;
//    struct TreeLinkNode *next;
//    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
//        
//    }
//};
//
//class Solution {
//public:
//    TreeLinkNode* GetNext(TreeLinkNode* pNode)
//    {
//        if(pNode==NULL) return NULL;
//		if(pNode->left ==NULL && pNode->right ==NULL) return pNode->next;
//		if(pNode->left && pNode->right ==NULL) return pNode->next->next;
//		if(pNode->)
//    }
//};
//	int main() 
//{
//	system("pause");
//	return 0;
//}