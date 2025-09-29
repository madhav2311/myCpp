#include<iostream>
#include<vector>
using namespace std;
class mani{
    public:
        string name,job;
        int age;
        double salary;
        mani(string name,string job,int age,
        double salary){
            this->name=name;
            this->job=job;
            this->age=age;
            this->salary=salary;
        }
        void drink(){
            cout<<name<<" is drinking"<<endl;

        }
        void eat(){
            cout<<name<<" is eating"<<endl;

        }
        void sal(){
            cout<<name<<"'s salary is :"<<salary<<endl;

        }
};
int main(){
    mani h1("mani","senior dev",19,889);
    h1.drink(); 
    h1.eat();
    h1.sal();
    return 0;
}