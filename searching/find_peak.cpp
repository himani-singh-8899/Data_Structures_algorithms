/*Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
          if (nums.size() <= 1) return 0;
    int mid = 0, l = 0, h = nums.size() - 1;
    
    while (l < h) {
        mid = (l + h) / 2;
        if (nums[mid] > nums[mid + 1])
            h = mid;
        else if (nums[mid] < nums[mid + 1])
            l = mid + 1;
    }
    
    return l;

    }
};
