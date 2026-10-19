class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto &s : strs){
           encoded += to_string(s.size()) + '#' + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i < s.size() && s[i] != '#'){
            
            
        }
        return ans;
    }
};
