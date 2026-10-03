class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int prev;
        bool hasPrev = false;

        for(int num : nums){
            if(hasPrev && num == prev){
                return true;
            }
            prev = num;
            hasPrev = true;
        }

        return false;
    }
};