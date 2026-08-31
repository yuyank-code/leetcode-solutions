class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n+1,0);
        for(int i=0;i<n;i++){
            temp[nums[i]]=1;
        }
       
         auto it = find(temp.begin(), temp.end(), 0);
         return it - temp.begin();
     
    }
};