class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {

        for (int i=0; i<9; i++) {
            
            map <char,int> c1, c2;

            for (int j=0; j<9; j++) {

                if ( a[i][j]>='1' && a[i][j]<='9' ) c1[a[i][j]]++;

                if ( a[j][i]>='1' && a[j][i]<='9' ) c2[a[j][i]]++;

            }

            for (auto j : c1) if ( j.second>1 ) return false;

            for (auto j : c2) if ( j.second>1 ) return false;

        }
        int a1 = 3, b = 0, c = 3;

        while (a1--) {

            map <char,int> c1, c2, c3;

            for (int i=b; i<c; i++) {
                for (int j=0; j<9; j++) {

                    if ( j<3 && a[i][j]>='1' && a[i][j]<='9' ) c1[a[i][j]]++;
                    else if ( j>=3 && j<6 && a[i][j]>='1' && a[i][j]<='9' ) c2[a[i][j]]++;
                    else if ( j>=6 && j<9 && a[i][j]>='1' && a[i][j]<='9' ) c3[a[i][j]]++;

                }
            }

            for (auto j : c1) if ( j.second>1 ) return false;
            for (auto j : c2) if ( j.second>1 ) return false;
            for (auto j : c3) if ( j.second>1 ) return false;
            b += 3, c += 3;

        }
        return true;
    }
};
