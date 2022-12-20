#include<iostream>
using namespace std;
int main (){
    int a=20, b=16, temp;

    cout << "a= " <<a<< endl;
    cout << "b= " <<b<< endl;
    temp = a;
    a = b;
    b = temp;
    cout << "Nilai setelah ditukar a= " <<a<< " b= " <<b<< endl;

    return 0;
}
