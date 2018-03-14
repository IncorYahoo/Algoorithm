//#include <iostream>
//
//using namespace std;
//
//
//void print(int **a, int dimension) {       //输出函数
//
//int i, j;
//
//int sum = 0;
//
//for (i = 0; i < dimension; i++) {
//
//for (j = 0; j < dimension; j++) {
//
//cout << a[i][j] << " ";
//
//}
//
//cout << endl;
//
//}
//
//for (i = 0; i < dimension; i++) {
//
//sum = sum + a[i][i] + a[i][dimension - 1 - i];
//
//}
//
//sum -= a[(dimension - 1) / 2][(dimension - 1) / 2];
//
//cout << sum << endl;
//
//}
//
//
//int main() {
//
//int x, y, dimension, i, j;
//
//int count = 1;
//
//int **p = NULL;
//
//cin >> dimension;
//
//
//p = new int *[dimension];
//
//for (i = 0; i < dimension; i++) {
//
//p[i] = new int[dimension];               //动态分配内存
//
//}
//
//
//x = y = (dimension - 1) / 2;           //以中间为起始点
//
//p[x][y] = count++;
//
//
//for (i = 1; i < dimension; i++) {    //一段一段往上数即可
//
//for (j = 1; j <= i; j++) {
//
//y = i % 2 ? y + 1 : y - 1;
//
//p[x][y] = count++;
//
//}
//
//for (j = 1; j <= i; j++) {
//
//x = i % 2 ? x - 1 : x + 1;
//
//p[x][y] = count++;
//
//}
//
//}
//
//for (y = 1; y < dimension; y++) {
//
//p[x][y] = count++;
//
//}
//
//print(p, dimension);
//
//for (i = 0; i < dimension; i++) {      //释放内存
//
//delete[]p[i];
//
//}
//
//delete[]p;
//
//return 0;
//
//}