class Solution {
public:
    bool checkPalindrome(string s) {
        int st = 0; 
        int e = s.size() - 1;
        
        while(st < e) {
            if(s[st] != s[e]) {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }    
    
    bool isValid(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        } else {
            return false;
        }
    }

    char makeLower(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            return ch - 'A' + 'a';
        }
    }

    bool isPalindrome(string s) {
        string temp = "";
        for(int j = 0; j < s.length(); j++) {
            if(isValid(s[j])) {
                temp.push_back(s[j]);  
            }
        }
        for(int j = 0; j < temp.length(); j++) {
            temp[j] = makeLower(temp[j]);
        }
        
        return checkPalindrome(temp);
    }
};
