class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(vector<int>& nums, vector<int>& temp, vector<int>& used) {
        
        // permutation complete
        if(temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // current position ke liye element choose karo
        for(int i = 0; i < nums.size(); i++) {
            
            // already use ho chuka hai
            if(used[i] == 1)
                continue;

            // pick
            used[i] = 1;
            temp.push_back(nums[i]);

            solve(nums, temp, used);

            // backtrack
            temp.pop_back();
            used[i] = 0;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int> temp;
        vector<int> used(nums.size(), 0);

        solve(nums, temp, used);

        return ans;
    }
};