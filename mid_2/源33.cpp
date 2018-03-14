//#include<iostream>
//#include<iomanip>
//using namespace std;
//int chess[4][4];
//
//void init()
//{
//	memset( chess , 0 , sizeof( chess ) );
//	int leftUp = 11;
//	int leftDown = 2;
//	chess[1][0] = leftUp+1;
//	chess[2][0] = leftDown-1;
//	chess[1][3] = leftUp-4;
//	chess[2][3] = leftDown+4;
//	for(int i=0;i<4;i++)
//	{
//		chess[0][i] = leftUp--;
//		chess[3][i] = leftDown++;
//	}
//}
//
//void iAndj(int &i,int &j,int q)
//{
//	for(int x=0;x<4;x++)
//	{
//		for(int y=0;y<4;y++)
//			if( chess[x][y] == q )
//			{
//				i = x;
//				j = y;
//				break;
//			}
//	}
//}
//
//void Movechess(int i,int j,int p,int &iAfter,int &jAfter)
//{
//	switch(p)
//	{
//		case 1:{chess[i-1][j] = chess[i][j];iAfter=i-1;jAfter=j;break;}
//		case 2:{chess[i+1][j] = chess[i][j];iAfter=i+1;jAfter=j;break;}
//		case 3:{chess[i][j-1] = chess[i][j];iAfter=i;jAfter=j-1;break;}
//		case 4:{chess[i][j+1] = chess[i][j];iAfter=i;jAfter=j+1;break;}
//	}
//	chess[i][j] = 0;
//}
//
//int judge(int i,int j)
//{
//	if( chess[i][j]>6 && chess[i][j]<=12 )return 1;
//	else if( chess[i][j]>0 && chess[i][j]<7 )return -1;
//	else if( chess[i][j] == 0 )return -2;
//}
//
//void judgeChessKill(int i,int j,int q)
//{
//	int flag = 0;
//	if( q > 6 )flag =1;
//	else flag = -1;
//
//		//横排
//	if(j==0){
//		if((judge(i,j+1) == flag) && (judge(i,j+2) == -flag) && (judge(i,j+3) == -2))
//			chess[i][j+2] = 0;
//	}
//	else if(j==3){
//		if((judge(i,j-1) == flag) && (judge(i,j-2) == -flag) && (judge(i,j-3) == -2))
//			chess[i][j-2] = 0;
//	}
//	else if(j==1){
//		if((judge(i,j-1) == flag) && (judge(i,j+1) == -flag) && (judge(i,j+2) == -2))
//			chess[i][j+1] = 0;
//		else if((judge(i,j-1) == -2) && (judge(i,j+1) == flag) && (judge(i,j+2) == -flag))
//			chess[i][j+2] = 0;
//		else if((judge(i,j-1) == -flag) && (judge(i,j+1) == flag) && (judge(i,j+2) == -2))
//			chess[i][j-1] = 0;
//	}	
//	else if(j==2)
//	{
//		if((judge(i,j-1) == flag) && (judge(i,j+1) == -flag) && (judge(i,j-2) == -2))
//			chess[i][j+1] = 0;
//		else if((judge(i,j+1) == flag) && (judge(i,j-1) == -flag) && (judge(i,j-2) == -2))
//			chess[i][j-1] = 0;
//		else if((judge(i,j-1) == flag) && (judge(i,j-2) == -flag) && (judge(i,j+1) == -2))
//			chess[i][j-2] = 0;
//	}
//	//竖排
//	if(i==0)
//	{
//		if((judge(i+1,j) == flag) && (judge(i+2,j) == -flag) && (judge(i+3,j) == -2))
//			chess[i+2][j] = 0;
//	}
//	else if(i==3)
//	{
//		if((judge(i-1,j) == flag) && (judge(i-2,j) == -flag) && (judge(i-3,j) == -2))
//		chess[i-2][j] = 0;
//	}
//	else if(i==1)
//	{
//		if((judge(i-1,j) == flag) && (judge(i+1,j) == -flag) && (judge(i+2,j) == -2))
//			chess[i+1][j] = 0;
//		else if((judge(i-1,j) == -2) && (judge(i+1,j) == flag) && (judge(i+2,j) == -flag))
//			chess[i+2][j] = 0;
//		else if((judge(i+2,j) == -2) && (judge(i+1,j) == flag) && (judge(i-1,j) == -flag))
//			chess[i-1][j] = 0;
//	}
//	else if(i==2)
//	{
//		if((judge(i-1,j) == flag) && (judge(i+1,j) == -flag) && (judge(i-2,j) == -2))
//			chess[i+1][j] = 0;
//		else if((judge(i+1,j) == flag) && (judge(i-1,j) == -flag) && (judge(i-2,j) == -2))
//			chess[i-1][j] = 0;
//		else if((judge(i-1,j) == flag) && (judge(i-2,j) == -flag) && (judge(i+1,j) == -2))
//			chess[i-2][j] = 0;
//	}
//}
//
//int main()
//{
//	int n,m=1;
//	while(cin>>n)
//	{
//		init();
//		int q,p;//q棋子 p方向
//		int i,j;//q棋子的下标
//		int iAfter,jAfter;//q走后的下标
//		while(n--)
//		{
//			cin>>q>>p;
//			iAndj(i,j,q);
//			Movechess(i,j,p,iAfter,jAfter);
//			judgeChessKill(iAfter,jAfter,q);
//		}
//		cout<<"#Case "<<m<<":"<<endl;
//		for(int x=0;x<4;x++)
//		{
//			for(int y=0;y<4;y++)
//			{
//				cout<<setw(3)<<chess[x][y];
//			}
//			cout<<endl;
//		}
//		m++;
//	}
//	return 0;
//}