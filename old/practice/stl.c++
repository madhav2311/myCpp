#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The elements are:\n";
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
;}