class Solution {
public:
    bool rotateString(string s1, string s2)  {
        
        if (s1.length() != s2.length()) return false;
        
       
        string concatenated = s1 + s1;
        
        // Manual check for s2 in concatenated
        for (int i = 0; i <= concatenated.length() - s2.length(); ++i) {
            
            if (concatenated.substr(i, s2.length()) == s2) {
                return true;  
            }
        }
        
        return false;  // s2 not found
    }
};
