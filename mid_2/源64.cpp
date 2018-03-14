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
//	//��ǰ�ڵ�Ϊ���ڵ�
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
//	//��һ����� û�нڵ㣬Ϊ�� 
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
//	//���ڵ�Ϊ��ɫ ֱ�ӷ�
//	if(pf->nColor == BLACK) return ;
//
//	//���ڵ��Ǻ�ɫ ������ڵ� 
//	while(pf->nColor == RED)
//	{
//		//pf=pt->f;
//		pgrandFather = pf->f ;
//		if(pgrandFather==NULL) return ;
//		pUncle =getUncle(pt);
//
//		//�����Ǻ��
//		if(pUncle !=NULL && pUncle->nColor==RED)
//		{
//			//�������� ��� үү��� ���ϵ���
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
//		//�����Ǻڵ�
//		if(pUncle ==NULL || pUncle->nColor==BLACK)
//		{
//			//������үү����
//			 if(pgrandFather->l == pf)
//			 {
//				//��Ϊ���׵���
//				 if(pf->l==pt)
//				 {
//					 pf->nColor=BLACK ;
//					 pgrandFather->nColor =RED;
//					 rightTurn(&pgrandFather);return;
//				 }
//				//��Ϊ���׵���
//				 else
//				 {
//					 pt=pf;
//					 leftTurn(&pt);
//					 pf=pt->f;
//					 continue;
//				 }
//			 }
//			//������үү����
//			 else 
//			 {
//				//��Ϊ���׵���
//				 if(pf->l==pt)
//				 {
//					 pt=pf;
//					 rightTurn(&pt);
//					 pf=pt->f;
//					 continue;
//				 }
//				//��Ϊ���׵���
//				 else
//				 {
//					 //����ɫ ����
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
//	//����������ڵ� �������
//	if(pt->l &&pt->r)
//	{
//		pMark =pt;
//		pt=pt->l;
//		while(pt->r)
//			pt=pt->r;
//		pMark->nVal = pt->nVal ;
//	}
//
//	// pt Ϊ������Ҫ����ĵ�
//	/*1.����ɾ��Ԫ��Ϊ��ʱ������������û��ʲôӰ�죬ֱ��ɾ����
//	2.����ɾ��Ԫ��Ϊ����Ϊ���ڵ�ʱ��ֱ��ɾ����
//	3.����ɾ��Ԫ��Ϊ�ڣ�����һ�����ӽڵ�Ϊ��ʱ�������ӽڵ�Ϳ�ڷŵ���ɾ��Ԫ�ص�λ�ã���ͼ��
//	�� */ 
//	//1Ϊ�� ���� 2 ֻ��һ������
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
//	//3 pt Ϊ��ɫ ֱ��ɾ
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
//	//��ɫ ��һ���캢�� 
//	if(pt->nColor ==BLACK && (pt->l || pt->r))
//	{
//		//���� ���游����
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
//		//���� ���游����
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
//	//��ɾ��
//	pMark = pt;
//	if(pf->l == pt) pf->l=NULL;
//	else pf->r==NULL;
//
//	//5 ��ɫ �޺���
//	while(1)
//	{
//		//�ֵ��Ǻ��
//		if(pb!=NULL&& pb->nColor == RED)
//		{
//			//�ֺ� ����
//			pb->nColor = BLACK ;
//			pf->nColor = RED;
//
//			//�ֵ��Ǹ��׵���
//			if(pb==pf->l)
//			{
//				//�����ֵ�
//				pb=pf->r;
//				rightTurn(&pf);
//				continue;
//			}
//			//�ֵ��Ǹ��׵���
//			else
//			{
//				//�����ֵ�
//				pb=pf->l;
//				leftTurn(&pf);
//				continue;
//			}
//		}
//		//�ֵ��Ǻڵ�
//		if(pb!=NULL||pb->nColor ==BLACK)
//		{
//			//����ֶ���Ǻڵ�
//			if((pb->l==NULL&&pb->r==NULL)||
//				(pb->l!=NULL && pb->l->nColor==BLACK )&&(pb->r!=NULL&&pb->r->nColor==BLACK))
//			{
//				pb->nColor =RED;
//
//				//�����Ǻ�� 
//				if(pf->nColor == RED)
//				{
//					pf->nColor =BLACK ;
//					break;
//				}
//
//				//�����Ǻڵ�
//				if(pf->nColor ==BLACK)
//				{
//					pt=pf;
//					pf=pt->f;
//					if(pf==NULL)return ;
//					pb=getBrother(pt);
//					continue;
//				}
//			}
//			//��ֶ���Ǻ�� ��ֶ���Ǻڵ�
//			if(pb->l!=NULL && pb->l->nColor ==RED && (pb->r == NULL ||pb->r->nColor ==BLACK))
//			{
//				//�ֵ��Ǹ��׵���
//				if(pb == pf->r)
//				{
//					pb->l->nColor = BLACK ;
//					pb->nColor =RED;
//					rightTurn(&pb);
//					//�����ֵ�
//					pb=pb->f;
//					continue;
//				}
//				//�ֵ��Ǹ��׵���
//				else
//				{
//					pb->l->nColor =BLACK ;
//					pb->nColor=pf->nColor ;
//					pf->nColor=BLACK ;
//					rightTurn(&pf);
//					break;
//				}
//			}
//			// ��ֶ���Ǻ��
//			if(pb->r!=NULL&&pb->r->nColor ==RED)
//			{
//				//5.2.3.1�ֵ��Ǹ��׵���
//				if(pb == pf->r)
//				{
//					pb->r->nColor = BLACK;
//					pb->nColor = pf->nColor;
//					pf->nColor = BLACK;
//					leftTurn(&pf);
//					break;
//				}
//
//				//5.2.3.2�ֵ��Ǹ��׵���
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
//	printf("%d :��ɫ %d\n",ptmp->nVal,ptmp->nColor);
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