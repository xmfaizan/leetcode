class Solution {
public:
    int findfirst(vector<int> &nums,int target){
        int low=0;
        int high=nums.size()-1;
        int firstpos=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                firstpos=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return firstpos;
    }
    int findlast(vector<int> &nums,int target){
        int low=0;
        int high=nums.size()-1;
        int lastpos=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                lastpos=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return lastpos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first = findfirst(nums,target);
        ans.push_back(first);
        int last = findlast(nums,target);
        ans.push_back(last);
        return ans;
    }
};
