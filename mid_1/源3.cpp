////��ŵ������   
//#include <iostream>  
//using namespace std;  
//#include<string> 
////�����Ϊnumdisk�����Ӵ�init������desti��   
//void moveOne(int numDisk, string init, string desti)   
//{     
//    cout  << numDisk << " from " << init << " to " << desti << endl;  
//}  
////��numDisks�����Ӵ�init�˽���temp������desti��  
//void move(int numDisks, string init, string temp, string desti)  
//{  
//    if(numDisks == 1)  
//        moveOne(1, init, desti);  
//    else  
//    {  
//           
//        move(numDisks-1, init, desti, temp);//���Ƚ�����ģ�numDisk-1�������Ӵ�init�˽���desti������temp��  
//        moveOne(numDisks, init, desti);     //Ȼ�󽫱��ΪnumDisks�����Ӵ�init������desti��  
//        move(numDisks-1, temp, init,desti );//�������ģ�numDisks-1�������Ӵ�temp�˽���init������desti��   
//    }  
//}   
//  
//int main()  
//{  
//	int n;
//	cin>>n;
//
//    move(n, "A", "B", "C");    
//    return 0;  
//}  