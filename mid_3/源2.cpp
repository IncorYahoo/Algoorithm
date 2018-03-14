//#include <iostream>
//#include <cstring>
//using namespace std;
//bool book[15][15];
//int i=0,j=0,cnt=0;
//char maze[10][15]={"UDDLUULRUL","UURLLLRRRU","RRUURLDLRD","RUDDDDUUUU","URUDLLRRUU","DURLRLDLRL","ULLURLLRDU","RDLULLRDDD","UUDDUDUDLL","ULRDLUURRR"};
//void dfs(int x,int y)
//{
//	do
//    {
//    	book[x][y]=1;
//        if(maze[x][y]=='U')
//    	   x-=1;
//	    else if(maze[x][y]=='D')
//	       x+=1;
//	    else if(maze[x][y]=='L')
//	       y-=1;
//	    else if(maze[x][y]=='R')
//	       y+=1;
//	    if(book [x][y]==1)
//	       break;
//	}
//	while(x<=9&&x>=0&&y>=0&&y<=9);
//	if(x<0||x>9||y<0||y>9)
//	{
//		cnt++;
//		cout<<cnt<<endl;
//	}
//	if(j==9)
//	{
//		if(i<9)
//		{
//		   memset(book,0,sizeof(book));
//		   dfs(i++,j);
//		}
//		else if(i==9)
//		   return ; 
//	}
//	else
//	{
//	    memset(book,0,sizeof(book)); 
//		dfs(i,j++);
//	}
//}
//int main()
//{
//    memset(book,0,sizeof(book));
//    dfs(0,0);
//	cout<<cnt<<endl;
//	return 0;
// } 