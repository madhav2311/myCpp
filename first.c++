#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int n,temp,min,i,j;
    cout<<"Enter the size of array:\n";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements:\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j]){
               min=j;
            }
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    cout<<"The Sorted Array:\n";
     for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;

}