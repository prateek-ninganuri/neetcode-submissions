class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        bool swap1=true;

       
        for(int i=0;i<nums.size();i++){
            if (swap1==false){
                return nums;
            }
              swap1=false;
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    swap1=true;
                }
            }
        }
        return nums;
        
    }
};