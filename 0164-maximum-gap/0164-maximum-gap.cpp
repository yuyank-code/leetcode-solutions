class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        if(n<2){
            return 0;
        }
        int gap=nums[1]-nums[0];

        for(int i=2;i<n;i++){
            if(nums[i]-nums[i-1]>gap)
            gap= nums[i]-nums[i-1];
        }
        return gap;
    }
};