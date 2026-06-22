class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int ans=0;
        int n=nums.size()/2;

        for(int num:nums){
            mpp[num]++;
        }

       for(auto&p:mpp){
        if(p.second>=n){
            ans=p.first;
        }
       }
       return ans;
        
    }
};