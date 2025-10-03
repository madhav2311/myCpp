#include<iostream>

using namespace std;

int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    int**ptr1;
    ptr1=&ptr;
    cout<<*ptr<<endl;//dereferencing operator " * "
    cout<<*ptr1<<endl;

}