class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int indx=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[indx])
            {
                indx++;
                nums[indx]=nums[i];
            }
        }
        return indx+1;
    }
};