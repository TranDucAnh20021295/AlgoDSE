
int longestOnes(vector<int>& nums, int k) {
        int maxConsecutiveOne = 0;
        int start = 0;
        int numOfZero = 0;
        for(int end = 0; end < nums.size(); end++){
            if(nums[end] == 0){
                numOfZero++;
            }
            if(numOfZero > k){
                if(nums[start] == 0){
                    numOfZero--;
                }
                start++;
            }
            maxConsecutiveOne = max(maxConsecutiveOne, end - start + 1);
        }
        return maxConsecutiveOne;
    }

