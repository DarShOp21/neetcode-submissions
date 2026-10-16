class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;

        vector<int>count1(26 , 0) , count2(26 , 0);

        for(char c : s1)
            count1[c-'a']++;
        
        for(int i = 0 ; i < s1.size() ; i++)
            count2[s2[i]-'a']++;
        
        int left = 0 , right = s1.size()-1;

        while(right < s2.size()){
            if(count1 == count2)
                return true;
            
            count2[s2[left++] - 'a']--;

            if(right < s2.size() - 1)
                count2[s2[++right] - 'a']++;
            else
                break;
        }

        return false;
    }
};
