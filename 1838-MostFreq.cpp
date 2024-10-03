#include <unordered_map>  // Include this for unordered_map
#include <vector>         // Include this for vector
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        long long total = 0;  // To keep track of the number of operations used
        int left = 0;         
        int result = 0;      

        for (int right = 0; right < nums.size(); ++right) {

            total += nums[right];
            while ((long long)nums[right] * (right - left + 1) - total > k) {
                total -= nums[left];  // Remove the leftmost element from the total
                left++;               // Shrink the window
            }

            // Step 4: Update the result with the maximum size of the valid window
            result = max(result, right - left + 1);
        }

        return result;
    }
};
