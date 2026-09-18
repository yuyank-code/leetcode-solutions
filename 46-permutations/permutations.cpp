// class Solution {
// public:
//     vector<vector<int>> ans;
    
//     void solve(vector<int>& nums, vector<int>& temp, vector<int>& used) {
        
//         // permutation complete
//         if(temp.size() == nums.size()) {
//             ans.push_back(temp);
//             return;
//         }

//         // current position ke liye element choose karo
//         for(int i = 0; i < nums.size(); i++) {
            
//             // already use ho chuka hai
//             if(used[i] == 1)
//                 continue;

//             // pick
//             used[i] = 1;
//             temp.push_back(nums[i]);

//             solve(nums, temp, used);

//             // backtrack
//             temp.pop_back();
//             used[i] = 0;
//         }
//     }

//     vector<vector<int>> permute(vector<int>& nums) {
        
//         vector<int> temp;
//         vector<int> used(nums.size(), 0);

//         solve(nums, temp, used);

//         return ans;
//     }
// };
// class Solution {
// public:
  
    
//     void solve(vector<int>&ds,vector<int>& nums, vector<vector<int>>& ans, int freq[]) {
//         if(ds.size()==nums.size()){
//             ans.push_back(ds);
//             return;
//         }
//         for(int i=0;i<nums.size();i++){
//             // if(!freq[i]){
//             if (freq[i] == 0){
//                 ds.push_back(nums[i]);
//                 freq[i]=1;
//                 solve(ds,nums,ans,freq) ;
//                 freq[i]=0;
//                 ds.pop_back();         
//                 }
//         }
        

//     }

//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>ds;
//         int freq[nums.size()];
//         for(int i=0;i<nums.size();i++) freq[i]=0;
//         solve(ds,nums,ans,freq);
//         return ans;


      
//     }
// };
class Solution {
private:
    void recurPermute(int index, vector<int>& nums,
                      vector<vector<int>>& ans) {

        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++) {

            swap(nums[index], nums[i]);

            recurPermute(index + 1, nums, ans);

            swap(nums[index], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;

        recurPermute(0, nums, ans);

        return ans;
    }
};