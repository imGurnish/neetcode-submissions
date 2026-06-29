class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]=i+1;
        }
        for(int i=0;i<n;i++){
            int j=mp[target-nums[i]];
            if(j && j!=i+1){
                return {i,j-1};
            }
        }
        return {0,1};
    }
};
