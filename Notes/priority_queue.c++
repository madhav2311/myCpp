#include<queue>
//We need to inclued queue headerfile to include priority queue
#include<iostream>
using namespace std;
//Priority queue uses either min or  max heap , it has timecomplexity of O(logn) in all cases
void priority(){
    priority_queue<int>pq;
    pq.push(10);
    pq.push(9);
    pq.push(8);
    pq.push(7);

    //in priority queue it reaaranges the top to be the largest value out of all the elements in the priority queue
     while(!pq.empty()){
        cout<<pq.top()<<" "; //10 9 8 7
        pq.pop();
     }
    //TO create a min heap based priority queue that is reverse priority queue, it holds the smallest value in its top
    priority_queue<int,vector<int>,greater<int>>rpq;
rpq.push(3);
rpq.push(2);   
rpq.push(1); 
while(!rpq.empty()){
        cout<<rpq.top()<<" ";//1 2 3 
        rpq.pop();
     }  
}
    int main(){
        priority();
        return 0;

    }
