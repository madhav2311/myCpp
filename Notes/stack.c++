#include<iostream>
#include<stack>
using namespace std;

//Stack is a stl container than uses lifo(Last In Firt Out )method

void stack_func(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
//top is used to refer the top element
    cout<<s.top()<<endl;//3
//pop is used to remove the top element
    s.pop();
    cout<<s.top()<<endl;//2
//size is used to identify the size or number of objects or elements inside the stack
    cout<<s.size()<<endl;//2

//swap is used to swap the whole stack with an another stack
    stack<int>s1;//it is empty ie 0
    s1.swap(s);
    cout<<s.size()<<endl;//0
    cout<<s1.size()<<endl;//2

//empty is used to check whether stack is empty or not , returns 1 or 0
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();

    }


}
int main(){
    stack_func();
}