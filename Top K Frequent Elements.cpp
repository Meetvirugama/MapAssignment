class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map <int,int> c;

    for(int n:nums){
        c[n]++;
    }

    vector<vector<int> > f( nums.size()+1 );

    for(auto &p : c){
        int n = p.first;
        int c = p.second;
        f[c].push_back(n);
    }
    
    vector<int> r;

    for(int i= f.size() - 1 ; i > 0; i--){
        for(auto n:f[i]){
            r.push_back(n);
            if(r.size() == k ) return r;
        }
    }

    return r;
}
};
