#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int BinarySearch(vector<int>&v,int target){
    int low=0,high=v.size()-1,mid=0;
    //sort(v.begin(),v.end());
    while(low<=high){
        mid=low+(high-low)/2;
        if(v[mid]==target){
            return mid;

        }
        else if(v[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return -1;
}
int Recursive_BS(vector<int>&v,int target,int low,int high){
    if(low>high){
        return -1;
    }    
    int mid=low+(high-low)/2;
    if(v[mid]==target){
        return mid;
    }
    else if(v[mid]<target){
        low=mid+1;

        Recursive_BS(v,target,mid+1,high);
    }
    else{
         
        Recursive_BS(v,target,low,mid-1);

    }

}
int main(){
    vector<int>v={1,34,5,2,5,3,8,2,4};
    sort(v.begin(),v.end());
    int m=Recursive_BS(v,8,0,v.size()-1);
    int f=BinarySearch(v,8);
    cout<<"Using Iterative Method\n";
    if(f!=-1){
       cout<<"Found at "<<f<<endl;
   }
   else{
    cout<<"Not Found\n";
   }
   cout<<"Using Recursive Method\n";
   if(m!=-1){
       cout<<"Found at "<<m<<endl;
   }
   else{
    cout<<"Not Found\n";
   }
   
}