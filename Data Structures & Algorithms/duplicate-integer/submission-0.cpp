class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>count;

        for(int num : nums){
            if(count[num])
                return true;
            count[num] = 1;
        }

        return false;
    }
};