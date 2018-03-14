#include <cstdio>
#include <iostream>
using namespace std;

int heap[100005], size = 0;
//第一个元素的下标为1.
void push(int x){
    int i = ++size;
    while(i > 1){
        int p = i / 2;
        if(heap[p] >= x)
            break;
        heap[i] = heap[p];
        i = p;
    }
    heap[i] = x;
}

int pop(){
    //最大值
    int ret = heap[1];
    //要提到根的值
    int x = heap[size--];
    int i = 1;
    while(2 * i + 1 <= size){
        int a = 2 * i, b = 2 * i + 1;
        if(heap[b] > heap[a])
            a = b;
        if(x >= heap[a])
            break;
        heap[i] = heap[a];
        i = a;
    }
    heap[i] = x;
    
    return ret;
}

int main(){
    int n, w;
    char c;
    cin >> n;
    while(n--){
        cin >> c;
        if(c == 'A'){
            cin >> w;
            push(w);
        } else {
            cout << pop() << endl;
        }
    }
    return 0;
}