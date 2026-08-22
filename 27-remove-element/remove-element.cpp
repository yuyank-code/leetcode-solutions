class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                temp.push_back(nums[i]);
            }
        }
        int x=temp.size();
        for(int i = 0; i < x; i++) {
            nums[i] = temp[i];
        }
        return x;

    }
};