// class Solution {
// public:
//     int climbStairs(int n) {
//         if (n <= 2)
//             return n;

//         return climbStairs(n - 1) + climbStairs(n - 2); 
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
    int climbStairs(int n){
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
    int solve(int n,vector<int>&dp){
        if(n<=2)
            return n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=solve(n-1,dp)+solve(n-2,dp);
    }
};