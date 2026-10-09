class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;

        for(int num : nums){
            count[num]++;
        }

        priority_queue<pair<int,int>>pq;
        for(auto pair : count)
            pq.push({pair.second , pair.first});

        vector<int>ans;
        while(k--){
            pair<int,int> element = pq.top();
            pq.pop();
            ans.push_back(element.second);
        }

        return ans;
    }
};
