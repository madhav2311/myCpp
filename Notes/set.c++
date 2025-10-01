#include<iostream>
#include<set>
//set is a container that arranges data in ascending order,it uses self balancing tree ,
//so most of the functions or methods are with the time complexity O(logn)
#include<unordered_set>
using namespace std;

void sets(){
    //synatax similar to map , it has size,empty,erase,count(it counts the number of keys available of same value),
    //find(it finds the address and sends the iterator)
    set<int>s;
    s.insert(6);
    s.insert(5);//emplace also available
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(1);//every element is unique repeated are discarded or not inserted
    s.insert(3);
    set<int>s1(s);
    for(auto val:s){
        cout<<val<<" ";//sorts in ascending order
    }
    cout<<endl;
    cout<<*s.find(4)<<endl;

    //Lower and upper bounds are only applicable on sorted data only in set, not in unordered set
    //lower_bound() returns the iterator of the value being passed if present,
    // if not present than returns the next immediate iterator higher than the passed value,
    // if passed value and no higher value is present then it returns set.end()

    cout<<"Lower Bound= "<<*(s.lower_bound(4))<<endl;//returns iterator but im deferencing it using *,now itll be 4,\
    
    //if 4 is not present then returns 5,if even 5 is not then 6,even if 6 is not then returns s.end() ie simply iterator shows 0

    //upper_bound() returns the iterator of the value greater than that similar but greater than the passed value

    cout<<"UpperBound= "<<*s.upper_bound(4)<<endl;



}
void multisets(){
    //multiset can have duplicate values but it is also sorted
    multiset<int>s;
    s.insert(6);
    s.insert(5);//emplace also available
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(1);//every element is may or not be unique repeated are discarded or not inserted
    s.insert(3);
    s.erase(3);
    
    for(auto val:s){
        cout<<val<<" ";//sorts in ascending order
    }
    cout<<endl;
    cout<<"count= "<<s.count(1)<<endl;;



}
void unset(){
    unordered_set<int>s;
    s.insert(6);
    s.insert(5);//emplace also available
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(1);//every element is unique repeated are discarded or not inserted
    s.insert(3);
     for(auto val:s){
        cout<<val<<" ";//random order
    }

}

int main(){
    //multisets();
    unset();//all functions has an average time complexity of O(1), worst case O(n)
    return 0;

}