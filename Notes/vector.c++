#include<iostream>
#include<vector>
using namespace std;
int main(){
    //normal direct initialization
   vector<int>vec={1,2,3,4};
   //push_back(val) is used to insert an element in increasing index
   vec.push_back(5);
   for(int val:vec){
    cout<<val<<endl;
   }
   //pop_back deletes the last element of the vector
   vec.pop_back();
   cout<<endl;
   for(int val:vec){
       cout<<val<<endl;
       }
       
       //capacity is used to check the capacity is left in a vector or to know total capacity of a vector
       //in vector before inserting a new value 
       //it creates a new memory twice the initial size of the vector then copies the old elements and inserts new element 
       //it creates a new memory twice the initial size of the vector then copies the old elements and inserts new element 
       //this happens if the capacity is equal to the size of the vector
       cout<<endl;
       cout<<vec.capacity()<<endl;
       //size displays the size of the vector
       cout<<vec.size()<<endl;
       cout<<vec.at(2)<<endl;
       //used to create a vector with same values , used in tabulation and dp tables
       cout<<endl;
       vector<int>vec1(5,1);
       for(int val:vec1){
           cout<<val<<endl;
           }
           //initializing a vector with another vector new vector is a ditto of the other vector
           vector<int>vec2(vec1);
           for(int val:vec2){
               cout<<val<<endl;
               }
        cout<<endl;

   //erase can be used to delete an element at any index using begin or end O(n)
   vec.erase(vec.begin()+1);
   for(int val:vec){
    cout<<val<<endl;
   }
   cout<<endl;
   //insert can be used to isnert an element at any index using position (begin or end),with an element value O(n)
   vec.insert(vec.begin()+1,2);
    for(int val:vec){
    cout<<val<<endl;
   }
   cout<<endl;
   //clear removes every element but the capacity remains the same
   vec.clear();
   //empty returns a boolean value
   cout<<"is empty "<<vec.empty()<<endl;

   //iterator, here it is a iterator the holds the address or memory location of a element ,
   //but can be accessed using * deferencing is done 
   //vec1.end() points to the next memory address after the last element's memory address
   vector<int>::iterator it;
   vec1={1,2,3,4,5};
   //rend() points to the memory address before the first element in the vector
   for(it=vec1.begin();it!=vec1.end();it++){
    cout<<*(it)<<endl;
   }
   cout<<endl;

   //auto typedefining a vector iterator
   for(auto i=vec1.rbegin();i!=vec1.rend();i++){
    cout<<*(i)<<endl;
   } 
   cout<<endl;
    return 0;

}