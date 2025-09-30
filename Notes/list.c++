#include<iostream>
#include<list>
#include<iterator>
#include<string>
using namespace std;
//Im creating this class to learn the differences between emplace_back() and push_back () when we deal with complex data types here user defined class object 
class person{
    public:
    string name;
    int age;
    
    person(string n,int a):name(n),age(a){
        cout<<"Constructor called for "<<name<<endl;


    }
    //const is used to make sure no data passed as parameter get changed with any value ,if const is used it make sure no functions manipuate the data 
    //other refers to the other variables inside passed object 

    //it is required to have a constructor inside the class to make a copy of the passed object , whewn we pass it to push_back() otherwise pushback doesnt work
    person(const person& other){
        name=other.name;
        age=other.age;
        cout<<"Constructor called to copy "<<name<<endl;


    }
    //here we are creating a method to print our person object variables
    void print() const {
        cout<<"name "<<name<<" and "<<age<<endl;
    }
};
//<________________________________________________________________________________________________________________________________________________
//List is a sequence container that allows constant time insertion and erase operation anywhhere in the sequence ,
//iterations can be carried out in both directions 
//List of stl uses a doubly linked list ,the operations of it is similar to the vector
//it uses different or unrelated locations to store elements,there will be a link in every node which points to the next and previous nodes.
//<________________________________________________________________________________________________________________________________________________
int main(){
    //inintialization 
    list<int> l={1,2,3,4,5};
 //<________________________________________________________________________________________________________________________________________________
    //pushback is used to insert an element to the end of the list.
    l.push_back(6);
    //we cannot randomly access an element in the list and also cannot use l[i] since nodes are located in different addresses .
    //we can use iterators and references
    for(int x:l){
        cout<<x<<endl;
    }
    cout<<"\nUsing iterators:"<<endl;
    
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*(it)<<endl;
    }
    //this fails because the list next to the list referenced by the iterator , it is stored in different location, not consequently,so we cannot access next node randomly.
    //auto it=l.begin();
    //cout<<*(it+1);
    //but we can use it++ or ++it
//<________________________________________________________________________________________________________________________________________________
    //Push_back pushes the objects to the end of the vector ,but if the objects are of complex datatypes(string,user defined class objects ,stand template libraries(list,vector,etc)etc)
    //we need to first push create an object of that complex data type then push it using push_back function then only we can able to push data of it types to any stl like vector ,list 

//<________________________________________________________________________________________________________________________________________________
    //Examples of emplace_back
    list<person>l1;
    //trying to push back into a list for complex datatypes like object here its person object
    //l1.push_back("mani",19);//we get an error since we cannot push a value without creating a object , the list may be a type of person but , 
    //the data it holds should be a object data type we must pass object to it so thast it could hold the data inside the list
    
    //Now im passing a person object called p inside the list of person data type
    person p("mani",19);
    l1.push_back(p);

    //we can also give temporary 
    l1.push_back(person("mimu",19));


    //hence we should pass object every time ,push_back doesnt create object with the given data 
    //l1.push_back("maddy",19); //we will get an error
//<________________________________________________________________________________________________________________________________________________
    //Now using emplace_back to push data inside the list of person type
    l1.emplace_back("maddy",19);
    //here emplace_back used the passed data to construct a object of person type and initialized that object with the passed data ,
    //it do inplace construction of the objects

    for(const person &x:l1){
        x.print();
    }
    //there is emplace_front() which works the same but inserts at the begining
//<________________________________________________________________________________________________________________________________________________

//MORE METHODS OF LISTS are similar to vector functions

//to remove range of elements 

list<int>l2={1,2,3,4,5};
//it is pointing to the address where 2 is located
list<int>::iterator it=++l2.begin();
//wkt that end points to the next address after the last element , then end-- must point to the last element address
l2.erase(it,l2.end());

//the out should be "1"

for(int val:l2){
    cout<<" hh "<<val<<endl;
}
list<int>l3={5,4,3,2,1};
//this fumctions sorts the list 
l3.sort();
for(int val:l3){
    cout<<val<<" ";
}
//this function reverse the order doesnt sort just reverse the order
cout<<endl;
l3.reverse();
for(int val:l3){
    cout<<val<<" ";
}

}