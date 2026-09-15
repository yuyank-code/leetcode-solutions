class Solution {
public:
void solve(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
    if(index==nums.size()){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[index]);
    solve(index+1,nums,ds,ans);
    ds.pop_back();
    solve(index+1,nums,ds,ans);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        set<vector<int>> result;
        solve(0,nums,ds,ans);
        for(auto x:ans){
            result.insert(x);
        }
        vector<vector<int>> finalAns;

        for(auto x : result) {
            finalAns.push_back(x);
        }

        return finalAns;
    }
};