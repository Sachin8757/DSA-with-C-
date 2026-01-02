#include<iostream>
#include<vector>
using namespace std;
/* int fib(int n, vector<int>&dp){
    //base case
    if(n==0 || n==1){                   //time complexity=O(N)
        return n;                       //Space complexity=O(N)+O(N)
    }
    //step3: check if the state is already solved
    if(dp[n] != -1){
        return dp[n];
    }
    //step4: rec case
    dp[n] = fib(n-1,dp) + fib(n-2,dp);
    return dp[n];
}
int fibb(int n){
  vector<int>dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){              //time complexity=O(N)
        dp[i]=dp[i-1]+dp[i-2];          //Space complexity=O(N)
    }
    return dp[n];
}
int main(){
    int n;
    cin>> n;
    //step1
    vector<int>dp(n+1,-1);
    //step2
    cout<<fibb(n)<<endl;
    return 0;
}
    */
   int main(){
    int n;
    cin>>n;
    int prev1=1;
    int prev2=0;
    if(n==0){
        return prev2;
    }
    for(int i=2;i<=n;i++){
        int curr=prev1+prev2;
        //shift loginc
        prev2=prev1;                    //time complexity=O(N)
        prev1=curr;                     //Space complexity=O(1)
    }
    cout<<prev1<<endl;
    return 0;
   }

    //time complexity=O(N)
   //Space complexity=O(1)