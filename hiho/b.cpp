    #include <cstdio>  
    #include <cstring>  
    #include <algorithm>  
    using namespace std;  
      
    int g[105][105];  
    int n, m;  
      
    void floyd()  
    {  
        for(int k=1; k <= n; k++)  
            for(int i=1; i <= n; i++)  
                for(int j=1; j <= n; j++)  
                    if(g[i][k] + g[k][j] < g[i][j])  
                        g[i][j] = g[i][k] + g[k][j];  
    }  
      
    int main()  
    {  
        freopen("in","r",stdin); 
            freopen("out","w",stdout); 
        while(scanf("%d %d", &n, &m) != EOF)  
        {  
            memset(g, 0x3f, sizeof(g));  
            for(int i=1; i<=n; i++) g[i][i] = 0;  
            while(m--)  
            {  
                int x, y, w;  
                scanf("%d %d %d", &x, &y, &w);  
                if(w < g[x][y]) g[x][y] = g[y][x] = w;  
            }  
            floyd();  
            for(int i=1; i<=n; i++)  
            {  
                for(int j=1; j<n; j++)  
                    printf("%d ", g[i][j]);  
                printf("%d\n", g[i][n]);  
            }  
        }  
        return 0;  
    }   