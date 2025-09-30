#include<iostream>
#include<vector>
using namespace std;
//pair is a sequence container which contains 2 elements of same or different datatype,stored in contigous manner
//we dont need to specify the header file to use pair STL, we can use #include<utility>, 
//if some IDE requires explicit mentioning

void pairBasics(){
    pair<int,int>p={1,1};
    cout<<p.first<<" "<<p.second<<endl;
    //pair can consist of any data types, like int ,string or string , int etc
    pair<int,string>p1={3,"mimu"};
    cout<<p1.first<<" "<<p1.second<<endl;

    //we can use pair as a data type any other primitive data types

    vector<pair<int,string>> vec={{1,"mani"},{2,"maddy"}};
    //we can access that data with 
    for(pair<int,string> it :vec){
        cout<<it.first<<" "<< it.second<<endl;

    }
    //as we discussed in the list concept about emplace_back and push_back 
    //again we will check what'll happen in both conditions
    vec.push_back(p1);
    //can be passed because it is already an object of pair type its not just raw value its an object

    //vec.push_back(4,"min");//gives an error

    //Here it accepts because emplace_back creates a constructor while passing data ,
    //it performs inplace construction of objects
    vec.emplace_back(4,"min");
    cout<<"\n"<<endl;
    for(pair<int,string> it :vec){
        cout<<it.first<<" "<< it.second<<endl;

    }


}
void pairr(){
    pair<int,pair<int,string>> p={1,{19,"mani"}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}
int main(){
    //pairBasics();
    pairr();
}