class Solution {
public:
    void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        }

        // Exclude the current element
        solve(nums, output, index + 1, ans);
        
        // Include the current element
        output.push_back(nums[index]);
        solve(nums, output, index + 1, ans);
        
        // Backtrack to remove the current element
        output.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;   
    }
};
