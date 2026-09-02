// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {

//         set<int> temp;

//         for(int i = 0; i < nums.size(); i++){
//             temp.insert(nums[i]);
//         }

//         int k = 0;

//         for(auto x : temp){
//             nums[k] = x;
//             k++;
//         }

//         return k;
//     }
// };
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.empty())
            return 0;

        int k = 1;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] != nums[i-1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};