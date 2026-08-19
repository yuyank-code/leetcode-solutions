class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int result=0;
      long long total = 0;
        sort(nums.begin(),nums.end());
        while(r<nums.size()){
            total+=nums[r];
            while((long long)nums[r]*(r-l+1)>total+k){
                total-=nums[l];
                l++;
            }
            result=max(result,r-l+1);
            r++;
        }
        return result;
    }
};