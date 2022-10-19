#include<iostream>
using namespace std;
int main() {
    int a=5, b=10, temp;

    cout <<"Nilai a= " <<a<< endl;
    cout <<"Nilai b= " <<b<< endl;
    a=a+b;
    b=a-b;
    a=a-b;

    cout <<"Hasil Akhir a= " <<a<< " b= " <<b<< endl;

    return 0;
}
