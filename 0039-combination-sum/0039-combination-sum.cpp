class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;

    void solve(vector<int>& candidates, int remaining, int start) {

        // Target achieved
        if (remaining == 0) {
            ans.push_back(current);
            return;
        }

        // We have gone beyond the target
        if (remaining < 0) {
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            // Temporarily select this number
            current.push_back(candidates[i]);

            // Subtract it from the remaining target
            solve(candidates, remaining - candidates[i], i);

            // Remove it and try the next number
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, target, 0);
        return ans;
    }
};