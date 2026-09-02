class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> temp;

        for(int i = 0; i < nums.size(); i++){
            temp.insert(nums[i]);
        }

        int k = 0;

        for(auto x : temp){
            nums[k] = x;
            k++;
        }

        return k;
    }
};