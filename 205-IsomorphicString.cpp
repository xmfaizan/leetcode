class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false; 

        vector<int> mapS(256, -1), mapT(256, -1);  

        for (int i = 0; i < s.length(); ++i) {
            char charS = s[i];
            char charT = t[i];

           
            if (mapS[charS] == -1 && mapT[charT] == -1) {
                // Create new mapping
                mapS[charS] = charT;
                mapT[charT] = charS;
            } else if (mapS[charS] != charT || mapT[charT] != charS) {
                return false;  // Mismatch found
            }
        }

        return true;  // No mismatches found, they are isomorphic
    }
};
