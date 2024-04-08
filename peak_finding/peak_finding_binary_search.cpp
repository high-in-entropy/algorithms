class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.empty()) {
            return -1;
        }
        else if ((nums.size() == 1) || (nums[0] > nums[1])) return 0;
        else if (nums[nums.size()-1] > nums[nums.size() - 2]) return nums.size() -1;
        else {
            int start = 1;
            int end = nums.size() - 2;
            int mid = (start + end)/2;
            while (start!=end){

                if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                    return mid;
                    break;
                } else if(nums[mid]<= nums[mid-1]){
                    end = mid - 1;
                }else {
                    start = mid + 1;
                }

                mid = (start + end)/2;
            }
            if (start == end) return start;
        }
      return -1;  
    }
};