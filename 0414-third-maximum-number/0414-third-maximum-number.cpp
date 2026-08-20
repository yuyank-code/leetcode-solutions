class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long largest=nums[0];
        long long slargest=LLONG_MIN;
        long long tlargest=LLONG_MIN;
        int count=1;
        for(int i=1;i<nums.size();i++){
             if(nums[i] == largest || nums[i] == slargest || nums[i] == tlargest)
                continue;
                if(nums[i]>largest){
                    long long temp=largest;
                    largest=nums[i];
                    tlargest=slargest;
                    slargest=temp;
                    count++;
                }
                else if(nums[i]>slargest){
                    tlargest=slargest;
                    slargest=nums[i];
                    count++;
                }
                else if(nums[i]>tlargest){
                    tlargest=nums[i];
                    count++;
                }


        }
        if(count<3)
            return largest;
        return tlargest;
    }
};