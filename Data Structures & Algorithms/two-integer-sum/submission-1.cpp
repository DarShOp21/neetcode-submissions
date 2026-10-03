class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>indexing;

        for(int i = 0 ; i < nums.size() ; i++){
            indexing.push_back({nums[i],i});
        }

        sort(indexing.begin() , indexing.end());

        int i = 0 , j = nums.size()-1;

        while(i < j){
            int sum = indexing[i].first + indexing[j].first;

            if(sum == target)
                return {min(indexing[i].second , indexing[j].second) , max(indexing[i].second , indexing[j].second)};

            else if(sum > target){
                j--;
            }else{
                i++;
            }
        }

        return {};
    }
};
