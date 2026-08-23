// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int> temp;

//         for(int i = 0; i < nums.size(); i++) {
//             int count = 0;

//             for(int j = 0; j < temp.size(); j++) {
//                 if(temp[j] == nums[i])
//                     count++;
//             }

//             if(count < 2) {
//                 temp.push_back(nums[i]);
//             }
//         }

//         for(int i = 0; i < temp.size(); i++) {
//             nums[i] = temp[i];
//         }

//         return temp.size();
//     }
// };
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(k < 2 || nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};