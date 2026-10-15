class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       unordered_map<char,int>count;
        for(char c : s1){
            count[c]++;
        }

        int need = count.size();

        for(int i = 0 ; i < s2.length() ; i++){
            unordered_map<char,int>tempCount;

            int curr = 0;
            for(int j = i ; j < s2.length() ; j++){
                char c = s2[j];
                tempCount[c]++;

                if(count[c] < tempCount[c])
                    break;

                if(count[c] == tempCount[c])
                    curr++;
                
                if(curr == need)
                    return true;
            }
        }

        return false;
    }
};
