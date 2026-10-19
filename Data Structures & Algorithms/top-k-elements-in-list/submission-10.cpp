class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>m;
        vector<pair<int, int>>vp;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        copy(m.begin(), m.end(), back_inserter(vp));
        sort(vp.begin(), vp.end(), [](auto &left, auto& right){return left.second > right.second;});
        vector<int>res;
        for(int i = 0; i < k; i++){
            res.push_back(vp[i].first);
        }
        return res;
    }
};
