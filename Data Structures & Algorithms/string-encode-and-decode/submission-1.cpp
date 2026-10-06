
class Solution {
public:
    string encode(vector<string>& strs) {
        string res = "";

        for (string &st : strs) {
            res += to_string(st.size());
            res += ",";
        }

        res += "#";

        for (string &st : strs) {
            res += st;
        }

        return res;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};

        vector<int> sizes;
        int i = 0;

        // Extract string lengths before '#'
        while (i < s.size() && s[i] != '#') {
            if (s[i] != ',') {
                int len = 0;

                while (i < s.size() && s[i] != ',') {
                    len = len * 10 + (s[i] - '0');
                    i++;
                }

                sizes.push_back(len);
            } else {
                i++;
            }
        }

        // Skip '#'
        i++;

        vector<string> result;

        // Extract strings using their lengths
        for (int len : sizes) {
            result.push_back(s.substr(i, len));
            i += len;
        }

        return result;
    }
};
