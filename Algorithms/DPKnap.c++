#include<iostream>
#include<vector>
using namespace std;
int max(int a ,int b){
    if(a>b)return a;
    else return b;
}

int knapsack(int n,int capacity,vector<int>&profits,vector<int>&weights){
    vector<vector<int>>k(n+1,vector<int>(capacity,0));//initials dp matrix with 0s necessary for 0 items and 0 capacity
    for(int i=1;i<=n;i++){
        for(int w=1;w<=capacity;w++){
            if(weights[i-1]<=w){
                k[i][w]=max(profits[i-1]+k[i-1][w-weights[i-1]],k[i-1][w]);
            }
            else{
                k[i][w]=k[i-1][w];
            }

        }
    }
    return k[n][capacity];
}
int main(){
    vector<int>weights={2,1,3,2};
    vector<int>profits={12,10,20,15};
    cout<<"The maximum profit is : "<<knapsack(4,5,profits,weights);
}