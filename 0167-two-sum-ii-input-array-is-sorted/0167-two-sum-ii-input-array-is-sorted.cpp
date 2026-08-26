class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int>mpp;
        for(int i=0;i<numbers.size();i++){
            int a=numbers[i];
            int more=target-a;
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more],i+1};
            }
            mpp[numbers[i]]=i+1;
        }
        return{};
    }
};