//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//enum {RED,BLACK};
//typedef struct _Node
//{
//	struct _Node * l,*r,*fa;
//	int nVal;
//	int nColor;
//}rbt_node;
// 
//rbt_node * pRBT  ;
// 
//
//rbt_node * createNode(int n){
//	rbt_node *  p = (rbt_node * )malloc(sizeof(rbt_node ));
//	p->l=NULL;
//	p->r=NULL;
//	p->fa = NULL;
//	p->nVal = n;
//	p->nColor = RED ;
//	return p;
//}
//rbt_node * findNodePosition(  int nVal  )
//{
// 
//	rbt_node *  ptmp = pRBT;
//	if(ptmp == NULL)return NULL;
//	else {
//		while(1) 
//		{
//			while(ptmp->l && nVal < ptmp->nVal)
//				ptmp = ptmp->l;
//			while(ptmp->r && nVal > ptmp->nVal)
//				ptmp = ptmp->r;
//			 if(ptmp->l ==NULL || ptmp->r==NULL )
//				 break;
//		}
//		return ptmp ;
//	}
//}
//rbt_node * getUncle(rbt_node * ptmp){
//	 return ptmp == ptmp ->fa->fa->l? ptmp->fa->fa->r:ptmp->fa->fa->l;
//}
//void leftTurn(rbt_node * ptmp)
//{
//	if(ptmp ==NULL)return ;
//	rbt_node * pl = ptmp->l;
//	rbt_node * pr = ptmp->r;
//	rbt_node * prl = ptmp->r->l;
//	ptmp->r->l=NULL;
//	pr->l =NULL;
//	
//		ptmp->r=prl;
//		if(prl)
//			prl->fa=ptmp;
//
//	rbt_node * pf =ptmp->fa;
//	if(pf==NULL){
//		pRBT = pr;
//		pr->fa=NULL;
//	}
//	else
//	{
//		if(pf->l == ptmp)
//			pf->l = pr;
//		else pf->r = pr;
//	}
//	pr->fa=pf;
//
//	pr->l =ptmp;
//	ptmp->fa=pr;
//}
//void rightTurn(rbt_node * ptmp)
//{
//	if(ptmp ==NULL)return ;
//	rbt_node * pl = ptmp->l;
//	rbt_node * pr = ptmp->r;
//	rbt_node * plr = ptmp->l->r;
//	 
//	ptmp->l->r=NULL;
//	pr->l=plr;
// 	if(plr )
//		plr->fa=pr;
//	
//	rbt_node * fa = ptmp->fa;
//	if(fa==NULL){
//		pRBT=pr;
//		pr->fa=NULL;
//	}
//	else
//	{
//		if(fa->l==ptmp)
//			fa->l=pr;
//		else fa->r = pr;
//	}
//	pr->fa=fa;
//	ptmp->fa=pr;
//	pr->l=ptmp;
//}
// 
//		
//
//void insertNode(  int n )
//{
//	 
//	//查找 要插入的位置  
//	rbt_node * ptmp , * pfa,* pUncle,* pl,*pr;
//	pfa=findNodePosition(n);
//	if(pfa == NULL)
//	{
//		ptmp =createNode(n);
//		pRBT =ptmp ;
//		ptmp->nColor =BLACK;
//		return ;
//	}
//	//链接
//	ptmp =createNode(n);
//	ptmp->fa =pfa;
//	if(pfa->nVal > ptmp->nVal)
//	{
//		pfa->l = ptmp;
//	}
//	else pfa->r = ptmp;
//	
//	
//	while(1)
//	{
//		if(ptmp->fa==NULL) {
//			ptmp->nColor=BLACK;
//			return;
//		}
//		pfa = ptmp ->fa;
//		if( pfa ->nColor  == BLACK) return ;
//		//判断父节点颜色 红色 才修改 
//		//else if( pfa ->nColor  == RED)
//		pUncle = getUncle(ptmp);
//		if(pUncle ==NULL)
//		{
//			pfa->fa->nColor=RED;
//			pfa->nColor=BLACK;
//			if(pfa->fa->l == pfa)
//				rightTurn(pfa->fa);
//			else leftTurn(pfa->fa);
//			return ;
//		}
//		if(pUncle->nColor == RED)
//		{
//			//父 黑 叔 黑 祖父红
//			pfa->nColor = BLACK ;
//			pUncle->nColor = BLACK ;
//			pfa->fa ->nColor = RED;
//			ptmp = ptmp->fa->fa;
//			continue ;
//		}
//		if(pUncle->nColor == BLACK && pfa->r && pfa->r == ptmp)
//		{
//			//父 变主节点 左旋
//			ptmp = pfa ;
//			leftTurn(ptmp);
//			continue;
//		}
//		if(pUncle->nColor == BLACK && pfa->l && pfa->l == ptmp)
//		{
//			//(01) 将“父节点”设为“黑色”。
//			//(02) 将“祖父节点”设为“红色”。
//			//(03) 以“祖父节点”为支点进行右旋。
//			pfa->nColor=BLACK ;
//			pfa->fa->nColor =RED;
//			rightTurn(pfa->fa);
//			
//			 ptmp=getUncle(pfa);
//			 continue;
//		}
//
//
//		return ;
//	}
//
//
//	  
//}
//
// 
//void   createRBT( int * arr ,int n ){
//	if(  arr ==NULL ||n<1)return   ;
//	f(i,0,n-1)
//		insertNode( arr[i]);
//	return   ;
//
//}
//void travelTree(rbt_node * node){
//	if(node ==NULL) return ;
//	printf("%d 颜色： \t%d \n",node->nVal,node->nColor);
//	travelTree(node->l);
//	travelTree(node->r);
//}
// 
//
//
//int main()
//{
//	int arr []={1,2 ,3  ,5 ,9 };
//	int n = sizeof(arr)/sizeof(arr[0]);
//    createRBT(   arr ,  n );
//	travelTree(pRBT);
//	return 0;
//}