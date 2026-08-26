class Solution {
public:
    int majorityElement(vector<int>& nums) {
            unordered_map<int,int>temp;
             for(int i=0;i<nums.size();i++){
                temp[nums[i]]+=1;
                if(temp[nums[i]] > nums.size() / 2) {
                return nums[i];
            }
            }
        return -1;
    }
};