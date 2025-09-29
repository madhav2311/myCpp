#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
        for(int i=0;i<a.size();i++){
            cout<< a[i]<<"  ";
        }
        
    }

int main(){
    int n,ele;
    cout<<"Enter the size of the vector:\n";
    cin>>n;
    vector<int>a;
   
    for(int i=0;i<n;i++){
        cout<<"Enter "<< i+1<<"th vector element:\n";
        cin>>ele;
        a.push_back(ele);
    }
    vector<int>::iterator iter=a.begin();
    a.insert(iter+1,2,23);
    display(a);
    
}