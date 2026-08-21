// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>>ans;
//         set<vector<int>>st;
//         for (int i=0;i<n;i++){
//             for( int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         vector<int> temp={nums[i],nums[j],nums[k]};
//                         sort(temp.begin(),temp.end());
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }
//          for(auto x : st) {
//             ans.push_back(x);
//         }

//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            unordered_set<int> hash;
                for(int j=i+1;j<n;j++){

                    int third=-(nums[i]+nums[j]);

                    if(hash.find(third)!=hash.end()){
                        vector<int>temp={nums[i],nums[j],third};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                     hash.insert(nums[j]);
                }
            
        }
       vector<vector<int>> ans(st.begin(), st.end());
        return ans;
     }
};
