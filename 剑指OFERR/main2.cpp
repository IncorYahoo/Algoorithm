   #include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<map>
#include<queue>
#include<algorithm>
#include<hash_map>
#include<stack>
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
//         if(pNode==NULL )return pNode;
//		 if(pNode->right !=NULL)
//		 {
//			 TreeLinkNode* res = pNode->right;
//			 while(res->left)
//				 res = res->left;
//			 return res;
//		 }
//		 while(pNode->next!= NULL)
//		 {
//			TreeLinkNode* root = pNode->next;
//            if(root->left == pNode) return root;
//            pNode = pNode->next;
//		 }
//		 return NULL;
//    }
//};
//


//
//struct TreeNode {
//    int val;
//    struct TreeNode *left;
//    struct TreeNode *right;
//    TreeNode(int x) :
//            val(x), left(NULL), right(NULL) {
//    }
//};
// class Solution {
//public:
//    bool isSymmetrical(TreeNode* pRoot)
//    {
//     return A(pRoot,pRoot);
//    }
//	 bool A(TreeNode* left,TreeNode* right)
//	 {
//		 if(left==NULL &&right==NULL )return true;
//		 if(left==NULL || right==NULL )return false;
//		 if(left->val != right->val  ) return false;
//		 return  A(left->left,right->right )&& A(left->right,right->left );
//
//	 }
//};
//
//��ʵ��һ����������֮���δ�ӡ������������һ�а��մ����ҵ�˳���ӡ��
//	�ڶ��㰴�մ��������˳���ӡ�������а��մ����ҵ�˳���ӡ���������Դ����ơ�
//
////
//
//struct TreeNode {
//    int val;
//    struct TreeNode *left;
//    struct TreeNode *right;
//    TreeNode(int x) :
//            val(x), left(NULL), right(NULL) {
//    }
//};
//
//
//class Solution {
//public:
//    vector<vector<int> > Print(TreeNode* pRoot) {
//		vector<vector<int> > v;
//        stack<TreeNode*> s1,s2;
//
//		if(pRoot==NULL) return v;
//		s1.push(pRoot);
//		while(!s1.empty()||  !s2.empty())
//		{
//			vector<int> k;
//			while(!s1.empty())
//			{
//				TreeNode* tmp = 	s1.top();
//				if(tmp->left ) s2.push(tmp->left);
//				if(tmp->right ) s2.push(tmp->right);
//				k.push_back(tmp->val);
//            
//				s1.pop();
//			}
//            if(! k.empty())
//            {
//                v.push_back(k);
//        	    k.clear();
//            }
//			
//			while(!s2.empty())
//			{
//				TreeNode* tmp = 	s2.top();
//			
//				if(tmp->right ) s1.push(tmp->right);
//				if(tmp->left ) s1.push(tmp->left);
//				k.push_back(tmp->val);
//              
//				s2.pop();
//			}
//		 	if(! k.empty())
//            {
//                v.push_back(k);
//        	    k.clear();
//            }
//		}
//	return v;
//	
//
//    }
//    
////};
//
//�����ϵ��°����ӡ��������ͬһ��������������ÿһ�����һ�С�
//
//
//
//struct TreeNode {
//    int val;
//    struct TreeNode *left;
//    struct TreeNode *right;
//    TreeNode(int x) :
//            val(x), left(NULL), right(NULL) {
//    }
//};
//
//class Solution {
//public:
//        vector<vector<int> > Print(TreeNode* pRoot) {
//		  vector<vector<int> > v;
//		  if(pRoot ==NULL) return v;
//          queue<TreeNode*> q1;
//		  queue <TreeNode*> q2 ;
//		  q1.push(pRoot);
//		 while(!q1.empty()||!q2.empty() )
//		 {
//			 vector<int> k;
//			 while(!q1.empty())
//			 {
//				if(q1.front()->left) q2.push(q1.front()->left);
//				if(q1.front()->right) q2.push(q1.front()->right);
//				k.push_back(q1.front()->val);
//				q1.pop();
//			 }
//			 if(!k.empty())
//			 {
//				 v.push_back(k);
//				 k.clear();
//			 }
//			 while(!q2.empty())
//			 {
//				if(q2.front()->left) q1.push(q2.front()->left);
//				if(q2.front()->right) q1.push(q2.front()->right);
//				k.push_back(q2.front()->val);
//				q2.pop();
//			 }
//			 if(!k.empty())
//			 {
//				 v.push_back(k);
//				 k.clear();
//			 }
//			 
//		 }
//
//		  return v;
//        }
//    
////};
//
//class Solution {
//private:
//	vector<int  > m_lst;
//public:
//    void Insert(int num)
//    {
//		m_lst.push_back(num);
//		::sort(m_lst.begin(),m_lst.end());
//
//    }
//
//    double GetMedian()
//    { 
//		if(m_lst.size()%2 ==1)
//		{
//			return   m_lst[m_lst.size()/2.0 ];
//		}
//		else{
//			return  (m_lst[m_lst.size()/2-1]+m_lst[m_lst.size()/2 ])/2.0; ; 
//		}
//    }
//
//};
//��Ŀ����
//����һ������ͻ������ڵĴ�С���ҳ����л�����������ֵ�����ֵ��
//���磬�����������{2,3,4,2,6,2,5,1}���������ڵĴ�С3����ôһ������6���������ڣ�
//���ǵ����ֵ�ֱ�Ϊ{4,4,6,6,6,5}�� �������{2,3,4,2,6,2,5,1}�Ļ�������������6���� 
//{[2,3,4],2,6,2,5,1}�� {2,[3,4,2],6,2,5,1}��
//{2,3,[4,2,6],2,5,1}�� {2,3,4,[2,6,2],5,1}�� {2,3,4,2,[6,2,5],1}�� {2,3,4,2,6,[2,5,1]}��
//class Solution {
//public:
//    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
//    {
//	
//		 vector<int>  v;
//		 if(size == 0 )return v;
//		 if(num.size()<size)  return v;
//		 
//		for(int i=0;i<num.size()-size+1;i++ )
//		{
//			int tmp =num[i];
//			for(int j=i;j<i+size;j++)
//			{
//				if(tmp < num[j])tmp=num[j];
//			}
//			v.push_back(tmp);
//		}
//		return v;
//
//
//    }
//	
//};

//��Ŀ����
//�����һ�������������ж���һ���������Ƿ����һ������ĳ�ַ��������ַ���·����
//·�����ԴӾ����е�����һ�����ӿ�ʼ��
//ÿһ�������ھ������������ң����ϣ������ƶ�һ�����ӡ�
//���һ��·�������˾����е�ĳһ�����ӣ����·�������ٽ���ø��ӡ�
//���� a b c e
//     s f c s 
//	   a d e e �����а���һ���ַ���"bcced"��·����
//���Ǿ����в�����"abcb"·����
//��Ϊ�ַ����ĵ�һ���ַ�bռ���˾����еĵ�һ�еڶ�������֮��·�������ٴν���ø��ӡ�
//
//class Solution {
//public:
//    bool hasPath(char* matrix, int rows, int cols, char* str)
//    {
//		vector<char> chr(rows*cols,0);
//		bool condition =false;
//
//		if(matrix==NULL ||  str==NULL )
//			return true;
//
//		for(int i=0;i<rows;i++)
//		{
//			for(int j=0;j<cols;j++)
//			{
//				condition=(condition|| dfs(matrix,chr,rows,cols,i,j,str));
//			}
//		}
//		return condition ;
//    }
//	bool dfs(char* matrix,	vector<char> & chr ,  int rows, int cols,  int i ,int j ,char* str)
//	{
//		if(i<0||i >=rows||j<0||j>=cols) return false;
//		if( matrix[i*cols+j] == *str&&chr[i*cols+j]==0 )
//		{
//			chr[i*cols+j]=1 ;
//			if(*(str+1)==0)  //�ַ�����β��
//			  return true;
//			bool condition =   
//				dfs( matrix,  chr ,   rows,  cols,   i-1 ,  j ,  str+1)||
//				dfs( matrix,  chr ,   rows,  cols,   i+1 ,  j ,  str+1)||
//				dfs( matrix,  chr ,   rows,  cols,   i ,  j-1 ,  str+1)||
//				dfs( matrix,  chr ,   rows,  cols,   i ,  j+1 ,  str+1) 
//				;
//
//			if(condition == false)
//                chr[i*cols+j]=0;
//            return condition;         
//		   }           
//        else
//            return false;
//	}
//
//};
//  ������һ��m�к�n�еķ���һ�������˴�����0,0�ĸ��ӿ�ʼ�ƶ���
//	ÿһ��ֻ�������ң��ϣ����ĸ������ƶ�һ�񣬵��ǲ��ܽ�������������������λ֮�ʹ���k�ĸ��ӡ�
//	���磬��kΪ18ʱ���������ܹ����뷽��35,37������Ϊ3+5+3+7 = 18�����ǣ�
//	�����ܽ��뷽��35,38������Ϊ3+5+3+8 = 19�����ʸû������ܹ��ﵽ���ٸ����ӣ�
////
//class Solution {
//public:
//	int s(int num)
//	{
//		return num/10+num%10;
//	}		
//    int movingCount(int threshold, int rows, int cols)
//    {
//		vector<int> v(rows*cols,0);
//		for(int i=0;i<rows;i++)
//		{
//			for(int j=0;j<rows;j++)
//			{
//				if((s(i)+s(j))  < threshold)
//				{
//					v[i*cols+j]++;
//				}
//			}
//		}
//		//���Ƿ���ܵ��� 
//	 //������һ��
//		int k=0;
//		bool flags=false;
//	  dfs(   v ,    rows,   cols,    0 ,  0 ,flags ) ;
//	for(int i=0;i<rows*cols;i++)
//		if(v[i] ==2)
//			k++;
//	return k;
//
//
//
//	}
//	bool dfs( 	vector<int> & chr ,  int rows, int cols,  int i ,int j ,bool flags )
//	{
//		if(i<0||i>=rows||j<0||j>=cols ||flags== true) return false;
//		bool flag = 
//		 dfs(  chr ,    rows,   cols,    i+1 ,  j ,flags )||
//		dfs(  chr ,    rows,   cols,    i-1 ,  j ,flags )||
//		dfs(  chr ,    rows,   cols,    i ,  j+1 ,flags )||
//		dfs(  chr ,    rows,   cols,    i ,  j-1  ,flags) ;
//		if(chr[i*cols+j] ==1 &&  flag==true) 
//			chr[i*cols+j]=2;
//		else{
//			flags = true;
//			 return false;
//		}
//		return true;
//	}
//};
class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
       bool *flag = new bool[rows * cols];
        for(int i = 0; i < rows * cols; i++)
            flag[i] = false;
        int count = moving(threshold, rows, cols, 0, 0, flag);
        return count; 
    }
     int moving(int threshold, int rows, int cols, int i, int j, bool* flag)
        {
        int count = 0;
        if(i >= 0 && i < rows && j >= 0 && j < cols && getsum(i) + getsum(j) <= threshold && flag[i * cols + j] == false)
            {
            flag[i * cols + j] = true;
            count =1 + moving(threshold, rows, cols, i + 1, j, flag)
                + moving(threshold, rows, cols, i - 1, j, flag)
                + moving(threshold, rows, cols, i , j - 1, flag)
                + moving(threshold, rows, cols, i, j + 1, flag);
        }
        return count;
    }
    int getsum(int num)
        {
        int sum = 0;
        while(num)
            {
            sum += num % 10;
            num /= 10;
              
        }
        return sum;
    }
};
	int main() 
{
	 Solution s;
	int n =  s.movingCount(5,10,10);
	n;


	system("pause");
	return 0;
}