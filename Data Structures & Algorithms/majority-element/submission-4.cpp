class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int x=nums[0];
       int count=1;

       for(int i=1;i<nums.size();i++){
        if(count==0){
            x=nums[i];
        }
        else if(nums[i]==x){
           count++;
        }

        
        else count--;

       }
       return x;
        
    }
};