// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {

//         for(int i = 0; i + 1 < nums.size(); i++) {

//             int mini = i;

//             for(int j = i + 1; j < nums.size(); j++) {
//                 if(nums[j] < nums[mini])
//                     mini = j;
//             }

//             int temp = nums[mini];
//             nums[mini] = nums[i];
//             nums[i] = temp;
//         }

//         return nums[nums.size() - k];
//     }
// };
// class Solution {
// public:

//     void merge(vector<int>& nums, int low, int mid, int high) {

//         vector<int> temp;

//         int i = low;
//         int j = mid + 1;

//         while (i <= mid && j <= high) {

//             if (nums[i] <= nums[j]) {
//                 temp.push_back(nums[i]);
//                 i++;
//             }
//             else {
//                 temp.push_back(nums[j]);
//                 j++;
//             }
//         }

//         while (i <= mid) {
//             temp.push_back(nums[i]);
//             i++;
//         }

//         while (j <= high) {
//             temp.push_back(nums[j]);
//             j++;
//         }

//         for (int k = low; k <= high; k++) {
//             nums[k] = temp[k - low];
//         }
//     }


//     void mergeSort(vector<int>& nums, int low, int high) {

//         if (low >= high)
//             return;

//         int mid = low + (high - low) / 2;

//         mergeSort(nums, low, mid);
//         mergeSort(nums, mid + 1, high);

//         merge(nums, low, mid, high);
//     }


//     int findKthLargest(vector<int>& nums, int k) {

//         mergeSort(nums, 0, nums.size() - 1);

//         return nums[nums.size() - k];
//     }
// };

class Solution {
 public:
  int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int ,vector<int>,greater<int>> pq;
    for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
    }
};