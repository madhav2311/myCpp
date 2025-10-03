#include<iostream>
#include<vector>
using namespace std;
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,high=arr.size()-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(low==high){
                return high;
            }
            if((arr[mid]>arr[mid-1])||(arr[mid]>arr[mid+1])){
                if((arr[mid]>arr[mid+1])&&(arr[mid]>arr[mid-1])){
                    return mid;
                }
                else if(arr[mid]<=arr[mid+1]){
                    low=mid+1;
                }
                else{
                     high=mid-1;

                }
            }
            else{
                    high=mid-1;
            }
        }
        return mid;


    }
    int main(){
    vector<int>v={3,5,3,2,0};
    int f=peakIndexInMountainArray(v);
    cout<<"Using Iterative Method\n";
    if(f!=-1){
       cout<<"Found at "<<f<<endl;
   }
   else{
    cout<<"Not Found\n";
   }
}