class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length();

        map <char,int> c;

        for (int i=0; i < len; i++) c[s[i]]++;

        for (int i=0; i < len; i++) if( c[s[i]] == 1 ) return i;
        
        return -1;
    }
};
