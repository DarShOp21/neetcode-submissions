class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>res;

        for(string s : strs){
            string sorted = s;
            sort(s.begin() , s.end());
            res[s].push_back(sorted);
        }

        vector<vector<string>>result;

        for(auto pair : res){
            result.push_back(pair.second);
        }

        return result;
    }
};
