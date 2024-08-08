class Solution {
public:
    vector<string> letterCombinations(string digits) {
         if (digits.empty()) return {};
        
        vector<string> result;
        string current;
        
        vector<string> mapping = {
            "",    "",    "abc",  "def",  // 0, 1, 2, 3
            "ghi", "jkl", "mno",  // 4, 5, 6
            "pqrs", "tuv", "wxyz" // 7, 8, 9
        };
        
        backtrack(result, mapping, digits, current, 0);
        
        return result;
    }
    
private:
    void backtrack(vector<string>& result, const vector<string>& mapping, const string& digits, string& current, int index) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        
        int digit = digits[index] - '0';
        const string& letters = mapping[digit];
        
        for (char letter : letters) {
            current.push_back(letter);
            backtrack(result, mapping, digits, current, index + 1);
            current.pop_back(); // backtrack
        }
    }
};

