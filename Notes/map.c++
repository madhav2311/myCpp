#include<iostream>
#include<map>
using namespace std;
//Map is a stl container that holds unique key and value pairs,it arranges string keys in lexicographical order ie alphabetically

void maap(){
    map<string,int>m;
    //key and value can be inserted using below method and it is implemented using self balancing tree with O(logn)
    m["c"]=0;
    m["a"]=1;
    m["b"]=2;
   
   //insert is used to insert value inside the map but should ressemble pair type
   m.insert({"d",3});
   //emplace is used to insert value directly since it can create an object of map type
   m.emplace("ab",2);
    for(auto x:m){
    cout<<x.first<<" "<<x.second<<endl;
   }
   //count is used count the number of keys available with same , name here in map it is not required but in multimap it is useful
   cout<<"count = "<<m.count("a")<<endl;
   //find returns the memory location of the key, and usefull to check whether the key is present in the map or not
   map<string,int>::iterator it=m.find("d");
   if(it!=m.end()){
    cout<<"found\n";

   }
   else{
    cout<<"not found\n";

   }
//erase is used to delete a map pair
m.erase("d");
for(auto x:m){
    cout<<x.first<<" "<<x.second<<endl;
   }

}
void multmaap(){
    //multimap is similar to map but it can have duplicate keys,it arranges string keys in lexicographical order ie alphabetically

    multimap<string,int>mp;
    //we cannot use mp["key"]=1; this kind of access is not possible , becasue it gets confused where to replace when there is already a key 

    mp.emplace("mani",19);
    mp.emplace("mani",122);
    mp.emplace("ana",11);
    for(auto w:mp){
        cout<<w.first<<" "<<w.second<<endl;
    }
}
int main(){
    //maap();
    multmaap();
    //unorder map is similar and one of the most used ds out of all three , it has O(1) in all cases,
    //it arranges map pairs in unordered manner.
    //headerfile used #include<unordered_map>
    //key is unique and similar to map
}