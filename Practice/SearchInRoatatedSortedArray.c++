#include<iostream>
#include<vector>
using namespace std;

int SearchInRotatedSortredArray(vector<int>&v,int target){
    int low=0;
    int high=v.size()-1,mid;

    while(low<=high){
        mid=low+(high-low)/2;
        if(v[mid]==target){
            return mid;
        }
        if(v[low]<=v[mid]){
            if(v[low]<=target && target<v[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(v[mid]<target && target<=v[high]){
                low=mid+1;

            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
    

}
int main(){
    vector<int>v={3,1,5};
    int f=SearchInRotatedSortredArray(v,3);
     if(f!=-1){
       cout<<"Found at "<<f<<endl;
   }
   else{
    cout<<"Not Found\n";
   }

}