#include<iostream>
#include<vector>
using namespace std;


int Memoizationfib(int n,vector<int>&v){
    if(n<=1){
        return n;
    }
   if(v[n]!=-1)return v[n];
   v[n]=Memoizationfib(n-1,v)+Memoizationfib(n-2,v);
   return v[n];
}
int Tabulationfib(int n){
    if(n<=1){
        return n;
    }
    vector<int>dp(n,0);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];

    }
    return dp[n];
}

int main(){
    int n=4;
    vector<int>v(n+1,-1);
    cout<<Memoizationfib(n,v);
    cout<<"\n";
    cout<<Tabulationfib(n);

}
