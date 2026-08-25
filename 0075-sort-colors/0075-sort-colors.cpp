// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size();
//      for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(nums[j]>nums[j+1]){
//                 int temp=nums[j+1];
//                 nums[j+1]=nums[j];
//                 nums[j]=temp;            }
//         }
//      }
//     // sort(nums.begin(),nums.end());
//     }
// };
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        for (int x : nums) {
            if (x == 0)
                count0++;
            else if (x == 1)
                count1++;
            else
                count2++;
        }

        int i = 0;

        while (count0--) {
            nums[i++] = 0;
        }

        while (count1--) {
            nums[i++] = 1;
        }

        while (count2--) {
            nums[i++] = 2;
        }
    }
};