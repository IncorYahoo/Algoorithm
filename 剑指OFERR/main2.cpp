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
//请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，
//	第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，其他行以此类推。
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
//从至上到下按层打印二叉树，同一层结点从左右输出。每一层输出一行。
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
//题目描述
//给定一个数组和滑动窗口的大小，找出所有滑动窗口里数值的最大值。
//例如，如果输入数组{2,3,4,2,6,2,5,1}及滑动窗口的大小3，那么一共存在6个滑动窗口，
//他们的最大值分别为{4,4,6,6,6,5}； 针对数组{2,3,4,2,6,2,5,1}的滑动窗口有以下6个： 
//{[2,3,4],2,6,2,5,1}， {2,[3,4,2],6,2,5,1}，
//{2,3,[4,2,6],2,5,1}， {2,3,4,[2,6,2],5,1}， {2,3,4,2,[6,2,5],1}， {2,3,4,2,6,[2,5,1]}。
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

//题目描述
//请设计一个函数，用来判断在一个矩阵中是否存在一条包含某字符串所有字符的路径。
//路径可以从矩阵中的任意一个格子开始，
//每一步可以在矩阵中向左，向右，向上，向下移动一个格子。
//如果一条路径经过了矩阵中的某一个格子，则该路径不能再进入该格子。
//例如 a b c e
//     s f c s 
//	   a d e e 矩阵中包含一条字符串"bcced"的路径，
//但是矩阵中不包含"abcb"路径，
//因为字符串的第一个字符b占据了矩阵中的第一行第二个格子之后，路径不能再次进入该格子。
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
//			if(*(str+1)==0)  //字符串结尾了
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
//  地上有一个m行和n列的方格。一个机器人从坐标0,0的格子开始移动，
//	每一次只能向左，右，上，下四个方向移动一格，但是不能进入行坐标和列坐标的数位之和大于k的格子。
//	例如，当k为18时，机器人能够进入方格（35,37），因为3+5+3+7 = 18。但是，
//	它不能进入方格（35,38），因为3+5+3+8 = 19。请问该机器人能够达到多少个格子？
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
//		//看是否额能到达 
//	 //便利了一遍
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