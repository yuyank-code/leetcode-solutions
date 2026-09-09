class Solution {
public:
vector<vector<int>>ans;
vector<int>current;
void solve(vector<int>&candidates,int remaining,int start){
    if(remaining==0){
        ans.push_back(current);
        return;
    }
    if(remaining<0){
        return;
    }
    for(int i=start;i<candidates.size();i++){
        if(i>start && candidates[i]==candidates[i-1]){
            continue;
        }
        current.push_back(candidates[i]);
        solve(candidates,remaining-candidates[i],i+1);
        current.pop_back();
    }
}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0);
        return ans;
        
    }
};
// class Solution{
//     public:
//     set<vector<int>>ans;
//     vector<int>current;
//     void solve(vector<int>&candidates,int remaining,int start){
//         if(remaining==0){
//             ans.insert(current);
//             return;
//         }
//         if(remaining<0){
//             return ;
//         }
//         for(int i=start;i<candidates.size();i++){
//             current.push_back(candidates[i]);
//             solve(candidates,remaining-candidates[i],i+1);
//             current.pop_back();
//         }
//     }
//     vector<vector<int>>combinationSum2(vector<int>&candidates,int target){
//        sort(candidates.begin(), candidates.end());
//         solve(candidates,target,0);
//          vector<vector<int>> result(ans.begin(), ans.end());

//         return result;
//     }
// };