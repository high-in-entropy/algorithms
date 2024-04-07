class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        if (nums.empty()) {
            return -1; // Or any other value to indicate no peak
        }
        int i = 0;
        for(i=0 ; i<nums.size() ; i++){
            if(i==0){
                if(nums[i]>nums[i+1]){
                    return 0;
                    break;
                } 
            } else if (i == nums.size()-1){
                if(nums[i]>nums[i-1]){
                    return i;
                    break;
                }
            } else if((nums[i] > nums[i-1]) && (nums[i] > nums[i+1])){
                return i;
                break;
            }
        }
        return -1;
    }
};