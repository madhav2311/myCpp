#include<iostream>
#include<algorithm>
using namespace std;
class object{
    public:
    int size,*ptr;
    object(int size){
        this->size=size;
        ptr=new int[size];
        cout<<"Enter the array  elements:\n";
        for(int i=0;i<size;i++){
            cin>>ptr[i];
        }
        cout<<"The array elements:\n";
        for(int i=0;i<size;i++){
            cout<<i+1<<" "<<ptr[i]<<" Stored at: "<<&ptr[i]<<endl;
        }

    }
    ~object(){

        delete[]ptr;
    }
    
};
int main (){
    object o1(5);
    return 0;
}