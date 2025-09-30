#include<iostream>
#include<queue>
using namespace std;
//Queue is a stl container that uses FIFO (First In First Out )method or idea to store and delete elements
void queue_func(){
    queue<int>q;
    q.push(0);//emplace is also used as we discussed about emplace indetail during list i can refer that         
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.front()<<" ";//here front() function is used to access queue elements
        q.pop();//pop is used to delete elements from the queue
    }
//now queue is empty
cout<<q.size()<<endl;//0
}

int main(){
    queue_func();
    return 0;
}