class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);

        //count the values of the char in the string s
        for(char c : s){
            count[c-'a']++;
        }

        //check for the chars in the string t
        for(char c : t){
            if(!count[c-'a'])
                return false;
            
            count[c-'a']--;
        }


        //check if any value is remaining 
        for(int c : count)
            if(c)
                return false;
            

        return true;
    }
};
