class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";  
        
        
        string prefix = strs[0];
        
        
        for (int i = 1; i < strs.size(); ++i) {
            // Compare characters of the prefix and current string
            int j = 0;  
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
                j++;  
            }
            prefix = prefix.substr(0, j);
            if (prefix.empty()) return "";  
        }
        
        return prefix;  
    }

};
