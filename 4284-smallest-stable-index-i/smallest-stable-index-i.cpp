class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans;
        for(int i=0;i<nums.size();i++){
            int maxi = *max_element(nums.begin(), nums.begin() + i + 1);
            int mini = *min_element(nums.begin() + i, nums.end());
            ans=maxi-mini;
            if(ans<=k){
                return i;
            }
            }
            return -1;
    }

};