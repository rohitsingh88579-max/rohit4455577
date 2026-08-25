class Solution 
{
    public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        unordered_set<int> st(nums.begin(),nums.end());
        int target=k;
        while(st.count(target))
        {
            target+=k;
        }    
        return target;
    }
};