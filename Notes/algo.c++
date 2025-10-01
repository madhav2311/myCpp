#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
bool comparator(pair<int,int> p1,pair<int,int>p2){
    if(p1.second<p2.second)return true;
    if(p1.second>p2.second)return false;

    if(p1.first<p2.first)return true;
    if(p1.first>p2.first)return false;


    }

void so(){
    vector<int>vec={5,3,2,1,6,3,2};
    sort(vec.begin(),vec.end());
    cout<<"sorts in ascending order\n";
    for(auto it:vec){
        cout<<(it)<<" ";//sorts in ascending order

    }
    cout<<endl;
    //To sort in descending order
    sort(vec.begin(),vec.end(),greater<int>());
    cout<<"sorts in ascending order\n";
    for(auto it:vec){
        cout<<(it)<<" ";//sorts in ascending order

    }
    vector<pair<int,int>>p={{2,1},{3,3},{3,1},{4,0},{5,2}};
    sort(p.begin(),p.end());
    for(auto ip:p){
        cout<<ip.first<<" "<<ip.second<<endl; //sorts in ascending  based on the first value 

    }
    cout<<"Sort based on second value\n";
    //to sort based on the second key we can create a user definef functor or comparator to sort according to second key value 
    sort(p.begin(),p.end(),comparator);
    for(auto ip:p){
        cout<<ip.first<<" "<<ip.second<<endl; //sorts in ascending  based on the first value 

    }
}
void more(){
    vector<int>v={3,4,1,2,5,6,7};
    reverse(v.begin(),v.end());// in reverse order
    for(auto it:v){
        cout<<(it)<<" ";// reverses the vector value

    }
    cout<<*max_element(v.begin(),v.end())<<endl;// 7 it sents address but we need to deference 
    cout<<*min_element(v.begin(),v.end())<<endl;//1

    //binary search returns 0(not found )or 1(found), no need to give a sorted vector or any data type
   cout<< binary_search(v.begin(),v.end(),4); 
}
void basic(){
    int a=6,b=5;
    swap(a,b);
    cout<<"a= "<<a<<" "<<"b= "<<b<<endl;
    cout<<"a= "<<a<<" "<<"b= "<<b<<" min = "<<min(a,b)<<endl;
    cout<<"a= "<<a<<" "<<"b= "<<b<<" max = "<<max(a,b)<<endl;


}
int main(){
    //so();
    //more();
    basic();
    return 0;

}