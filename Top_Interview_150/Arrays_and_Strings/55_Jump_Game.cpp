class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        bool ans=false;
        if(n==1)
        return true;
        int indx=0;
        for(int i=0;i<n-1;i++)
        {
            indx=max(indx,i+nums[i]);
            if(nums[i]==0 && indx<=i)
            return false;

            if(indx>=n-1)
            {
                return true;
            }
            
        }
        return ans;
    }
};