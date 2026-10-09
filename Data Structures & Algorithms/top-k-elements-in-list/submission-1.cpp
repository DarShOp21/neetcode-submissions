class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;

        for(int num : nums){
            count[num]++;
        }

        vector<pair<int,int>>nums_count;
        for(const auto& p : count){
            nums_count.push_back({p.second , p.first});
        }
        sort(nums_count.rbegin() , nums_count.rend());

        vector<int>ans;
        for(int i = 0 ; i < k ; i++){
            ans.push_back(nums_count[i].second);
        }

        return ans;
    }
};
