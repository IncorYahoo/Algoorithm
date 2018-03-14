#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)

enum Color{black,red};
typedef struct _RBTNode {
	int val;
	int color;
	struct _RBTNode * f,*l,*r;
}rbt;
rbt *pRbt = NULL;
rbt * createNode(int val){
	rbt *p =(rbt *)malloc(sizeof(rbt));
	p->val = val;
	p->f = NULL;
	p->l = NULL;
	p->r = NULL;
	p->color =red;

	return p;
}
void leftTurn(rbt ** pRoot){
	if(pRoot ==NULL) return ;

	rbt * t = *pRoot;
	rbt * pf = t->f;
	rbt * pl = t->l;
	rbt * pr = t->r;
	rbt * prl;
	if(pr)
		prl = t->r->l;
	if(prl)
		prl->f=t;
	t->r=prl;
	pr->l =NULL;
	if(pf==NULL) pRbt =pr;
	else 
	{
		if(pf->l==t)pf->l=pr;
		else
			pf->r=pr;
	}
	pr->f=pf;
	pr->l=t;
	t->f=pr; 
}
void rightTurn(rbt ** pRoot ){
	if(pRoot ==NULL) return ;

	rbt * t = *pRoot;
	rbt * pf = t->f;
	rbt * pl = t->l;
	rbt * pr = t->r;
	rbt * plr;
	if(pl)
		plr = t->l->r;
	if(plr)
		plr->f=t;
	t->l =plr;
	pl->r=NULL;
	if(pf==NULL)
	{
		pRbt=pl;
	}
	else 
	{
		if(pf->l==t)pf->l=pl;
		else
			pf->r=pl;
	}
	pl->f=pf;
	pl->r=t;
	t->f=pl; 
}
rbt * findfnode(int val){
	if(pRbt ==NULL) return NULL;
	rbt * t =pRbt;
	while(1)
	{
		if(t->l && t->val >val)
			 t=t->l;
		if(t->r&& t->val <val)
			 t=t->r;
		if((t->l==NULL && t->val >val)||(t->r==NULL && t->val <val))
			  break;
	}
	return t; 
}
rbt * GetUncle(rbt *  p ){
	rbt* gf = p->f->f;
	rbt* uncle;
	if(gf->l == p->f) uncle = gf->r;
	else uncle = gf->l;
	return uncle;
}
void insert(int val){
	if(pRbt == NULL) {
		pRbt =createNode(val);
		pRbt->color =black ;
		return ;
	}
	rbt * t = createNode(val);
	rbt * f = findfnode(val);
	rbt * gf, *uncle ;
	if(f->val >t->val)
	{
		t->f=f;
		f->l= t;
	}
	else
	{
		t->f=f;
		f->r=t;
	}
	//连接上以后判断情况 
	if(f->color == black)
		return;
	//父节点为红色 看叔叔节点
	while(f->color ==red)
	{
		gf =f->f;
		if(gf==NULL) return;
		uncle = GetUncle(t) ;

		//如果叔叔是红色
		if(uncle && uncle->color==red)
		{
			f->color =black;
			uncle->color =black;
			gf->color=red;
			if(gf==pRbt)
			{
				gf->color=black;
				return ;
			}
			t=f;
			f=gf;
			continue;
		}
		//叔叔是黑色 
		if(uncle==NULL || uncle->color ==black)
		{
			gf = f->f;
			if(gf->l==f)
			{ 
				if(t=f->l)
				{
					//父黑祖父红
					f->color=black;
					gf->color =red;
					 rightTurn(&f);
					return ; 
				}
				else
				{
					 t=f; 
					 leftTurn(&f);
					 f=t->f;
					continue; 
				} 
			}
			else
			{
				gf = f->f;
				if(t=f->l)
				{
					t=f;
					 rightTurn(&t);
					f=t->f;
					return ;
				}
				else
				{
					f->color=black;
					gf->color =red;
					 leftTurn(&gf);
					return;
				}
			}
		} 
	}
}
void print(rbt * pRbt)
{
	if(pRbt ==NULL) return ;
	printf("%d ===  %d  \n",pRbt->val ,pRbt->color);
	print(pRbt->l);
	print(pRbt->r);
}
void build (int * a,int n){
	if(a==NULL||n<=0)return ;
	f(i,0,n-1)
	{
		insert(a[i]);
	//	print(pRbt);
	}
}
rbt * select_node(int val){
	if(pRbt ==NULL) return NULL;
	rbt * t =pRbt;
	while(1)
	{
		if(t->l && t->val >val)
			 t=t->l;
		if(t->r&& t->val <val)
			 t=t->r;
		if(t->val ==val )return t;
	}
	return NULL; 
}

 rbt *GetBrother(rbt * t)
 {
	 if(t==NULL)return NULL;
	 if(t->f->l ==t)return t->f->r;
	 else return t->f->l;
 }
void delnode(int val){
	rbt * t = select_node(val);
	if(t==NULL) return ;
	
	rbt *pMark =NULL; 
	rbt *pf ;
	//有两个孩子 
	if(t->l && t->r)
	{
		rbt * d = t->l;
		while(d->r)d=d->r;
		d->f->r=NULL;
		t->val = d->val;
		pMark =d; 
	}
	//1.根没有孩子 或者 2 根有一个孩子
	if(t==pRbt &&(t->l==NULL&&t->r==NULL)||(t->l&&t->r==NULL)||(t->r&&t->l==NULL))
	{
		pRbt = t->l?t->l:t->r;
		pMark = t;
	}
	//红色节点
	if(t->color ==red)
	{
		pf=t->f;
		if(pf->l==t)
			pf->l =NULL;
		else
			pf->r=NULL;
		return ;
	}
	// 黑色 有一个红孩子
	if(t->color==black && (t->l&&t->r==NULL) ||(t->r&&t->l==NULL))
	{
		if(t->l) 
		{
			t->val=t->l->val;
			pMark =t->l;
			t->l=NULL;
		}
		else
		{
			t->val=t->r->val;
			pMark =t->r;
			t->r=NULL;
		}
	}


	//黑色没有孩子 看兄弟
	pf=t->f;
	rbt * pb =GetBrother(t);
	pMark =t;
	if(pf->l==t)
		pf->l=NULL;
	else pf->r=NULL;

	while(1)
	{
		//兄弟是红的 染黑旋转
		if(pb && pb->color==red)
		{
			pb->color=black;
			pf->color=red;
			if(pb=pf->l){
				pb=pb->r;
				rightTurn(&pf);
				continue;
			}
			else 
			{
				pb=pb->r;
				leftTurn(&pf);
				continue;
			}
		}
		//兄弟是黑的
		if(pb && pb->color==black)
		{
			//两个侄子都是黑的
			if(pb->l&&pb->r || (pb->l&&pb->r==NULL) || (pb->r&&pb->l==NULL)	)
			{
				pb->color = red;
				if(pf->color==red)
				{
					pf->color=black;
					break;
				}
				else
				{
					t=pf;
					pf=t->f;
					if(pf==NULL) break;
					pb=GetBrother(t);
					continue;
				}
			}
			//佐侄子 红 右黑 
			if(pb ->l && pb->l->color==red && pb->r==NULL|| pb->r->color==black)
			{
				if(pb=pf->r)
				{
					pb->color=red;
					pb->l->color=black;
					rightTurn(&pb);
					pb=GetBrother(t);
					continue;
				}
				else
				{
					pb->color=pf->color;
					pb->l->color=black;
					pf->color=black;

					rightTurn(&pf);
					break;
				}
			}
			//右侄子是红色
			if(pb->r &&pb->r->color==red)
			{
				if(pb==pf->r)
				{
					pb->color=pf->color;
					pf->color=black;
					pb->r->color=black;
					leftTurn(&pf);
					break;
				}
				else
				{
					pb->r->color=black;
					pb->color=red;
					leftTurn(&pb);
					pb=pb->f;;
					continue;
				}
			} 
		}
	}
	 

	free(pMark);
	pMark=NULL;



}

int main(){
	int a[]={2,4,9,45,61,3,1 };
	int n = sizeof(a)/sizeof(a[0]);
	build(a,n);
	 
	print(pRbt);

	return 0;

}

