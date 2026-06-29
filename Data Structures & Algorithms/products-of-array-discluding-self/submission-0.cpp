class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long prd=1;
        int zeros=0;
        for(auto i:nums){
            if(i==0)zeros++;
            else prd*=i;
        }
        vector<int> out;
        for(auto i:nums){
            if(i==0){
                if(zeros>1) out.push_back(0);
                else{
                    out.push_back(prd);
                }
            }
            else{
                if(zeros) out.push_back(0);
                else out.push_back((int)(prd/i));
            }
            
        }
        return out;
    }
};
