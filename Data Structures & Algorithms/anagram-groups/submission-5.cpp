// eat, tea -> [1 0 0 0 1 0...1....0], [1 0 0 0 1 0...1....0] -> {eat: [freq array]}

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>temp;
        for(int i = 0; i < strs.size(); i++){
            vector<int>count(26, 0);
            for(auto &c: strs[i]){
                count[c - 'a']++;
            }
            string hash_key = to_string(count[0]);
            for(int j = 1; j < 26; j++){
                hash_key += ',' + to_string(count[j]);
            }
            temp[hash_key].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto &p : temp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
