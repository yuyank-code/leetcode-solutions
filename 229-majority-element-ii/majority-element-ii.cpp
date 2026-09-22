// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n=nums.size();
//             map<int,int>temp;
//              for(int i=0;i<n;i++){
//                 temp[nums[i]]+=1;
//                 if(temp[nums[i]] > n / 3) {
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        map<int, int> temp;
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            temp[nums[i]]++;
        }
        for(auto x : temp) {
            if(x.second > n / 3) {
                ans.push_back(x.first);
            }
        }
        
        return ans;
    }
};