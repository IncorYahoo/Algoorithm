//#include <iostream>
//
//using namespace std;
//
//
//void print(int **a, int dimension) {       //�������
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
//p[i] = new int[dimension];               //��̬�����ڴ�
//
//}
//
//
//x = y = (dimension - 1) / 2;           //���м�Ϊ��ʼ��
//
//p[x][y] = count++;
//
//
//for (i = 1; i < dimension; i++) {    //һ��һ������������
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
//for (i = 0; i < dimension; i++) {      //�ͷ��ڴ�
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