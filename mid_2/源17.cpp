
    //#include<iostream>  
    //#include<cstdio>  
    //#include<cstring>  
    //#include<string>  
    //#include<algorithm>  
    //using namespace std;  
    //#define INF 0x3f3f3f3f  
    //#define MAXN 110  
    //int map[MAXN][MAXN], lowcost[MAXN];  
    //bool visit[MAXN];  
    //int nodenum, sum;  
    //  
    //void prim()  
    //{  
    //    int temp, k;  
    //    sum = 0;  
    //    memset(visit, false, sizeof(visit)); //��ʼ��visit  
    //    visit[1] = true;  
    //    for(int i = 1; i <= nodenum; ++i) //��ʼ��lowcost[i]  
    //        lowcost[i] = map[1][i];  
    //    for(int i = 1; i <= nodenum; ++i)//�����������ϵ㼯������СȨֵ�ı�  
    //    {  
    //        temp = INF;  
    //        for(int j = 1; j <= nodenum; ++j)  
    //            if(!visit[j] && temp > lowcost[j])  
    //                temp = lowcost[k = j];  
    //        if(temp == INF) break;  
    //        visit[k] = true; //������С����������  
    //        sum += temp;//��¼Ȩֵ֮��  
    //        for(int j = 1; j <= nodenum; ++j) //����lowcost����  
    //            if(!visit[j] && lowcost[j] > map[k][j])  
    //                lowcost[j] = map[k][j];  
    //    }  
    //}  
    //  
    //int main()  
    //{  
    //    int a, b, cost, edgenum;  
    //    while(scanf("%d", &nodenum) && nodenum)  
    //    {  
    //        memset(map, INF, sizeof(map));  
    //        edgenum = nodenum * (nodenum - 1) / 2;  
    //        for(int i = 1; i <= edgenum; ++i) //����ߵ���Ϣ  
    //        {  
    //            scanf("%d%d%d", &a, &b, &cost);  
    //            if(cost < map[a][b])  
    //                map[a][b] = map[b][a] = cost;  
    //        }  
    //        prim();  
    //        printf("%d\n", sum); //��С������Ȩֵ֮��  
    //    }  
    //    return 0;  a
    //}  