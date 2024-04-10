class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 1;
        int indx=1;
        for(int i=2;i<n;i++)
        {
            if(nums[i]!=nums[indx] || nums[i]!=nums[indx-1])
            {
                indx++;
                nums[indx]=nums[i];
            }
        }
        return indx+1;

    }
};