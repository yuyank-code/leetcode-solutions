// class Solution {
// public:
//     int fib(int n) {
//         if(n<=1){
//             return n;
//         }
//         return fib(n-1)+fib(n-2);
//     }
// };
// class Solution{
//     public:
//     int fib(int n){
//         vector<int>dp(n+1,-1);
//         return solve(n,dp);
//     }
//     int solve(int n,vector<int>&dp){
//         if(n<=1)
//             return n;
//         if(dp[n]!= -1)
//             return dp[n];
//         return dp[n]=solve(n-1,dp)+solve(n-2,dp);
//     }
// };
class Solution{
public:
    int fib(int n){
        if(n == 0)
            return 0;
        int prev2=0;
        int prev1=1;
        for(int i=2;i<=n;i++){
            int curi=prev1+prev2;
            prev2=prev1;
            prev1=curi;
        }
        return prev1;
    }
};