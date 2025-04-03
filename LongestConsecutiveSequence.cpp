class Solution {
public:
    int longestConsecutive(vector<int>& arr) {

        if (arr.empty()) return 0;

        sort(arr.begin(), arr.end());

        int m = 1, c = 1;
        
        for (size_t j = 1; j < arr.size(); j++) {

            if (arr[j] == arr[j - 1]) continue; 
            
            if (arr[j] - arr[j - 1] == 1) {
                c++; 
            }
            else {
                m = max(m, c);
                c = 1;
            }
        }
        
        return max(m, c);
    }
};
