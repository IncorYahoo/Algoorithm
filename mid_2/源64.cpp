//#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//enum {RED,BLACK};
//typedef struct _RBTNODE{ 
//
//	int nVal;
//	int nColor;
//	struct _RBTNODE * l,*r,*f;
//}rbtNode;
//rbtNode * pRBT ;
//rbtNode * creatNode(int n){
//	rbtNode *  p = (rbtNode *)malloc(sizeof(rbtNode));
//	p->f =NULL;
//	p->l =NULL;
//	p->r =NULL;
//	p->nVal = n ;
//	p->nColor = RED ;
//	return  p;
//
//}
//
//rbtNode * findpFnode(int n)
//{
//	if(pRBT == NULL ) return NULL;
//	rbtNode * t = pRBT;
//	while(1)
//	{
//		if((t->nVal > n) && t->l) t=t->l;
//		if((t->nVal< n ) && t->r) t=t->r;
//		if(t->l == NULL && t->nVal > n) break;
//		if(t->r == NULL && t->nVal < n) break;
//	}
//	return t;
//}
//rbtNode * getUncle(rbtNode * p )
//{
//	return p->f->f->l == p->f? p->f->f->r:p->f->f->l ;
//}
//void leftTurn(rbtNode ** ptmp)
//{
//	if(ptmp ==NULL ||pRBT ==NULL) return ;
//	rbtNode * pl =  (*ptmp)->l;
//	rbtNode * pr =  (*ptmp)->r;
//	rbtNode * prl = (*ptmp)->r->l;
//	rbtNode * pf  = (*ptmp)->f;
//
//
//	pr->l =NULL ;
//	(*ptmp)->r= prl;
//	if(prl)
//	prl->f = (*ptmp);
// 
//	pr->l = (*ptmp);
//	(*ptmp)->f = pr;
//	pr->f = pf;
//	//当前节点为根节点
//	if(pf==NULL)
//	{
//		pRBT =pr;
//		return ;
//	}
//	if(pf->l==(*ptmp))
//		pf->l = pr;
//	else 
//		pf->r=pr;
//	 return;
//}
//void rightTurn(rbtNode ** ptmp)
//{
//	if(ptmp ==NULL ||pRBT ==NULL) return ;
//	rbtNode * pl =  (*ptmp)->l;
//	rbtNode * pr =  (*ptmp)->r;
//	rbtNode * plr = (*ptmp)->l->r;
//	rbtNode * pf  = (*ptmp)->f;
//
//	pl->r = NULL;
//	(*ptmp)->l = plr;
//	if(plr)
//	plr->f= (*ptmp);
//
//	pl->r= (*ptmp);
//	(*ptmp)->f=pl;
//	pl->f=pf;
//	if(pf==NULL)
//	{
//		pRBT=pl;
//		return ;
//	}
//	if(pf->l==(*ptmp))
//		pf->l=pl;
//	else pf->r=pl;
//	return ;
//} 
//void insertNode(int n)
//{
//	rbtNode * pf = findpFnode(n);
//	rbtNode * pt = creatNode(n);
//	rbtNode * pUncle ,*pgrandFather;
//	//第一种情况 没有节点，为根 
//	if(pf == NULL)
//	{
//		pRBT = pt;
//		pt->nColor =BLACK ;
//		return ;
//	}
//	if(pf->nVal < pt->nVal )
//	{
//		pf->r=pt;
//		pt->f =pf;
//	}
//	else
//	{
//		pf->l=pt;
//		pt->f =pf;
//	}
//	//父节点为黑色 直接放
//	if(pf->nColor == BLACK) return ;
//
//	//父节点是红色 看叔叔节点 
//	while(pf->nColor == RED)
//	{
//		//pf=pt->f;
//		pgrandFather = pf->f ;
//		if(pgrandFather==NULL) return ;
//		pUncle =getUncle(pt);
//
//		//叔叔是红的
//		if(pUncle !=NULL && pUncle->nColor==RED)
//		{
//			//父亲叔叔 变黑 爷爷变红 向上调整
//			pf->nColor =BLACK ;
//			pUncle->nColor =BLACK ;
//			pgrandFather ->nColor =RED ;
//			if(pgrandFather==pRBT)
//			{
//				pgrandFather ->nColor =BLACK ;
//				return;
//			}
//			pt=pgrandFather;
//			pf=pt->f;
//			continue;
//		}
//		//叔叔是黑的
//		if(pUncle ==NULL || pUncle->nColor==BLACK)
//		{
//			//父亲是爷爷的左
//			 if(pgrandFather->l == pf)
//			 {
//				//子为父亲的左
//				 if(pf->l==pt)
//				 {
//					 pf->nColor=BLACK ;
//					 pgrandFather->nColor =RED;
//					 rightTurn(&pgrandFather);return;
//				 }
//				//子为父亲的右
//				 else
//				 {
//					 pt=pf;
//					 leftTurn(&pt);
//					 pf=pt->f;
//					 continue;
//				 }
//			 }
//			//父亲是爷爷的右
//			 else 
//			 {
//				//子为父亲的左
//				 if(pf->l==pt)
//				 {
//					 pt=pf;
//					 rightTurn(&pt);
//					 pf=pt->f;
//					 continue;
//				 }
//				//子为父亲的右
//				 else
//				 {
//					 //改颜色 左旋
//					 pf->nColor = BLACK ;
//					 pgrandFather->nColor = RED;
//					 leftTurn(&pgrandFather);
//					 return;
//				 }
//			 }
//		}
//	}
//	pRBT->nColor = BLACK;
//		 
//}
//
//rbtNode * getBrother(rbtNode * p )
//{
//	return p->f->l == p? p->f->r:p->f->l ;
//}
//rbtNode * search (rbtNode *  p ,int n)
//{
//	while( p )
//	{
//		if(p->nVal == n)break;
//		else if (p->nVal <n)p=p->r;
//		else if (p->nVal > n)p=p->l;
//	}
//	return p;
//}
//void delNode(rbtNode *  p ,int n)
//{
//	if(p==NULL) return;
//	rbtNode * pt= search(p,n);
//	if(pt==NULL) return ;
//	
//	rbtNode *pMark ,*pf,*pb ; 
//	//如果有两个节点 左的最右
//	if(pt->l &&pt->r)
//	{
//		pMark =pt;
//		pt=pt->l;
//		while(pt->r)
//			pt=pt->r;
//		pMark->nVal = pt->nVal ;
//	}
//
//	// pt 为真正需要处理的点
//	/*1.当被删除元素为红时，对五条性质没有什么影响，直接删除。
//	2.当被删除元素为黑且为根节点时，直接删除。
//	3.当被删除元素为黑，且有一个右子节点为红时，将右子节点涂黑放到被删除元素的位置，如图：
//	由 */ 
//	//1为根 或者 2 只有一个孩子
//	if(pt->f == NULL)
//	{
//		pRBT = pt->l?pt->l:pt->r;
//		if(pRBT != NULL)
//		{
//			pRBT->nColor =BLACK ;
//			pRBT->f= NULL;
//		}
//		free (pt);
//		pt=NULL ; 
//		return;
//	}
//
//	//3 pt 为红色 直接删
//	if(pt->nColor==RED)
//	{
//		pf =pt->f;
//		if(pf->l==pt)pf->l==NULL;
//		else pf->r=NULL;
//		free(pt);
//		pt= NULL;
//		return ;
//	}
//
//	//黑色 有一个红孩子 
//	if(pt->nColor ==BLACK && (pt->l || pt->r))
//	{
//		//父亲 是祖父的左
//		if(pt == pt->f->l)
//		{
//			if(pt->l!=NULL)
//			{
//				pt->f->l = pt->l;
//				pt->l->f = pt->f;
//				pt->l->nColor = BLACK ;
//			}
//			else
//			{
//				pt->f->l = pt->r;
//				pt->r->f=pt->f;
//				pt->r->nColor =BLACK ;
//			}
//		}
//		//父亲 是祖父的右
//		else
//		{
//			if(pt->l!=NULL)
//			{
//				pt->f->r= pt->l;
//				pt->l->f= pt->f;
//				pt->l->nColor =BLACK ;
//			}
//			else
//			{
//				pt->f->r= pt->r;
//				pt->r->f= pt->f;
//				pt->r->nColor =BLACK ;
//			}
//		}
//		free(pt);
//		pt=NULL;
//		return;
//	}
//
//
//	pf=pt->f;
//	pb=getBrother(pt);
//	//假删除
//	pMark = pt;
//	if(pf->l == pt) pf->l=NULL;
//	else pf->r==NULL;
//
//	//5 黑色 无孩子
//	while(1)
//	{
//		//兄弟是红的
//		if(pb!=NULL&& pb->nColor == RED)
//		{
//			//兄黑 父红
//			pb->nColor = BLACK ;
//			pf->nColor = RED;
//
//			//兄弟是父亲的左
//			if(pb==pf->l)
//			{
//				//更新兄弟
//				pb=pf->r;
//				rightTurn(&pf);
//				continue;
//			}
//			//兄弟是父亲的右
//			else
//			{
//				//更新兄弟
//				pb=pf->l;
//				leftTurn(&pf);
//				continue;
//			}
//		}
//		//兄弟是黑的
//		if(pb!=NULL||pb->nColor ==BLACK)
//		{
//			//两个侄子是黑的
//			if((pb->l==NULL&&pb->r==NULL)||
//				(pb->l!=NULL && pb->l->nColor==BLACK )&&(pb->r!=NULL&&pb->r->nColor==BLACK))
//			{
//				pb->nColor =RED;
//
//				//父亲是红的 
//				if(pf->nColor == RED)
//				{
//					pf->nColor =BLACK ;
//					break;
//				}
//
//				//父亲是黑的
//				if(pf->nColor ==BLACK)
//				{
//					pt=pf;
//					pf=pt->f;
//					if(pf==NULL)return ;
//					pb=getBrother(pt);
//					continue;
//				}
//			}
//			//左侄子是红的 右侄子是黑的
//			if(pb->l!=NULL && pb->l->nColor ==RED && (pb->r == NULL ||pb->r->nColor ==BLACK))
//			{
//				//兄弟是父亲的右
//				if(pb == pf->r)
//				{
//					pb->l->nColor = BLACK ;
//					pb->nColor =RED;
//					rightTurn(&pb);
//					//更新兄弟
//					pb=pb->f;
//					continue;
//				}
//				//兄弟是父亲的左
//				else
//				{
//					pb->l->nColor =BLACK ;
//					pb->nColor=pf->nColor ;
//					pf->nColor=BLACK ;
//					rightTurn(&pf);
//					break;
//				}
//			}
//			// 右侄子是红的
//			if(pb->r!=NULL&&pb->r->nColor ==RED)
//			{
//				//5.2.3.1兄弟是父亲的右
//				if(pb == pf->r)
//				{
//					pb->r->nColor = BLACK;
//					pb->nColor = pf->nColor;
//					pf->nColor = BLACK;
//					leftTurn(&pf);
//					break;
//				}
//
//				//5.2.3.2兄弟是父亲的左
//				if(pb == pf->l)
//				{
//					pb->r->nColor = BLACK;
//					pb->nColor = RED;
//					leftTurn(&pb);
//
//					pb = pb->f;
//					continue;
//				}
//			}
//		}
//	}
//	free(pMark);
//	pMark =NULL;
//
//}
//void create(int * a ,int n )
//{
//	f(i,0,n-1)
//	insertNode(a[i]);
//}
//void travel(rbtNode *  ptmp )
//{
//	if(ptmp==NULL)
//		return ;
//
//	printf("%d :颜色 %d\n",ptmp->nVal,ptmp->nColor);
//		travel(ptmp->l);
//	travel(ptmp->r);
//}
//int main()
//{
//	int a[]={11,2,14,1,7,15,5,8,4};
//	int n =sizeof(a)/sizeof(a[0]);
//	create(a,n);
// 	travel(pRBT);
//	delNode(pRBT,2);
//	travel(pRBT);
//	delNode(pRBT,7);
//	 travel(pRBT);
//	 delNode(pRBT,8);
//	 travel(pRBT);
//	 
//	return 0;
//}