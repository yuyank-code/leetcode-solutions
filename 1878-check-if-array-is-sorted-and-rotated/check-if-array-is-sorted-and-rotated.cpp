class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> temp = nums;

        sort(temp.begin(), temp.end());

        int n = nums.size();

        for(int k = 0; k < n; k++) {

            bool same = true;

            for(int i = 0; i < n; i++) {
                if(nums[i] != temp[(i - k + n) % n]) {
                    same = false;
                    break;
                }
            }

            if(same)
                return true;
        }

        return false;
    }
};