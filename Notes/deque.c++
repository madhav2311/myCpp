#include<iostream>
#include<deque>
using namespace std;

//--------------------------------------------------------------------------------------------------------------------------------------------------
//Deque: It refers to double ended queue
//Why deque over List ,because list is uses doubly linked list,where memory address of each element in different addresses.
//while deque uses dynamic array, here random access is possible that is deque[1] is possible ,but list[1]is not possible .
// RANDOM ACCESS IN DEQUE IS POSSIBLE BUT NOT IN LIST, we can randomly access but we need to know the reference address of the element(like index) 
void deque_func(){
    deque<int>d={1,2,3,4,5};
//--------------------------------------------------------------------------------------------------------------------------------------------------
    //Rest of the operations are same
    //push_back(val),emplace_back(),front(),last(),begin(),end(),erase(iterator or index),clear(),empty(),size(),capacity(),insert()etc
    //iterators include rbegin,rend etc
    cout<<d[1]<<endl; //prints 2

}
//--------------------------------------------------------------------------------------------------------------------------------------------------
int main(){
    deque_func();
    return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------