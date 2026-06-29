class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> st;
        for(auto i:nums){
            st.insert(i);
        }
        if(st.size()!=nums.size()) return true;
        return false;
    }
};