//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int maxn = 1e5 + 10;
//int n, m;
//int cnt;
//struct node{
//    int L, R;//�ֱ�ָ����������
//    int sum;//�ýڵ��Ӧ�������ĸ���
//    node(){
//        sum = 0;
//    }
//}Tree[maxn * 20];
//struct value{
//    int x;//ֵ�Ĵ�С
//    int id;//��ɢ֮ǰ��ԭ�����е�λ��
//}Value[maxn];
//bool cmp(value v1, value v2)
//{
//    return v1.x < v2.x;
//}
//int root[maxn];//����߶����ĸ��ڵ�
//int ran[maxn];//ԭ������ɢ֮�������
//void init()
//{
//    cnt = 1;
//    root[0] = 0;
//    Tree[0].L = Tree[0].R = Tree[0].sum = 0;
//}
////  update(ran[i], root[i], 1, n);
//void update(int num, int &rt, int l, int r)
//{
//    Tree[cnt++] = Tree[rt];
//    rt = cnt - 1;
//    Tree[rt].sum++;
//    if(l == r) return;
//    int mid = (l + r)>>1;
//    if(num <= mid) update(num, Tree[rt].L, l, mid);
//    else update(num, Tree[rt].R, mid + 1, r);
//}
//// Value[ query(root[left - 1], root[right], k, 1, n) ].x);
//int query(int i, int j, int k, int l, int r)
//{
//    int d = Tree[Tree[j].L].sum - Tree[Tree[i].L].sum;
//    if(l == r) return l;
//    int mid = (l + r)>>1;
//    if(k <= d) return query(Tree[i].L, Tree[j].L, k, l, mid);
//    else return query(Tree[i].R, Tree[j].R, k - d, mid + 1, r);
//}
//int main()
//{
//    //freopen("C:\\Users\\creator\\Desktop\\in.txt","r",stdin) ;
//    //freopen("C:\\Users\\creator\\Desktop\\out.txt","w",stdout) ;
//    scanf("%d%d", &n, &m);
//    for(int i = 1; i <= n; i++)
//    {
//        scanf("%d", &Value[i].x);
//        Value[i].id = i;
//    }
//    //������ɢ��
//    sort(Value + 1, Value + n + 1, cmp);
//    for(int i = 1; i <= n; i++)
//    {
//        ran[Value[i].id] = i;
//    }
//    init();
//    for(int i = 1; i <= n; i++)
//    {
//        root[i] = root[i - 1];
//        update(ran[i], root[i], 1, n);
//    }
//    int left, right, k;
//    for(int i = 1; i <= m; i++)
//    {
//        scanf("%d%d%d", &left, &right, &k);
//        printf("%d\n", Value[query(root[left - 1], root[right], k, 1, n)].x);
//    }
//    return 0;
//}
//
