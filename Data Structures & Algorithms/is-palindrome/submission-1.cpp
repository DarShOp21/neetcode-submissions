class Solution {
public:
    bool isAlphanumeric(char c){
        return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }


    bool isPalindrome(string s) {   
        int i = 0 , j = s.size()-1;

        while(i < j){
            if(!isAlphanumeric(s[i])){
                i++;
                continue;
            }
            
            if(!isAlphanumeric(s[j])){
                j--;
                continue;
            }

            if(tolower(s[i]) != tolower(s[j]))
                return false;

            i++;
            j--;
        }

        return true;
    }
};
