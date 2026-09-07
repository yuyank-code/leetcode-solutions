// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n = nums.size();

//         int smallest = nums[0];
//         int largest = nums[0];

//         for(int i = 1; i < n; i++) {
//             if(nums[i] < smallest)
//                 smallest = nums[i];

//             if(nums[i] > largest)
//                 largest = nums[i];
//         }

//         if(smallest >= 1)
//             return 1;

//         return largest + 1;
//     }
// };
// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n = nums.size();

//         vector<int> hash(n + 1, 0);

//         for (int x : nums) {
//             if (x > 0 && x <= n) {
//                 hash[x]++;
//             }
//         }

//         for (int i = 1; i <= n; i++) {
//             if (hash[i] == 0) {
//                 return i;
//             }
//         }
//         return n + 1;
//     }
// };
class Solution{
    public:
    int firstMissingPositive(vector<int>&nums){
        int n=nums.size();
        vector<int>temp(n+1,0);
        for(int x:nums){
            if(x>0 &&x<=n){
                temp[x]++;
            }
        }
        for(int i=1;i<=n;i++){
            if(temp[i]==0){
                return i;
            }
        }
        return n+1;
    }
};