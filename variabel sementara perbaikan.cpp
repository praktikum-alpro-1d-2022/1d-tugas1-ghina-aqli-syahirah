#include<iostream>
using namespace std;
int main (){
    int a=20, b=16, temp;

    cout << "A= " <<a<< endl;
    cout << "B= " <<b<< endl;
    temp = a;
    a = b;
    b = temp;
    cout << "Nilai setelah ditukar A= " <<a<< " B= " <<b<< endl;

    return 0;
}
