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
        int ind = 0;
        while(i < s.size()){
            string temp = "";
            while(s[i] != '#'){
                temp += s[i];
                i++;
            }
            ind = i;
            int num = stoi(temp);
            string pushing = "";
            for(int j = i + 1; j < i + 1 + num; j++){
                pushing += s[j];
            }
            ans.push_back(pushing);
            i = i + num + 1;
        }
        return ans;
    }
};
