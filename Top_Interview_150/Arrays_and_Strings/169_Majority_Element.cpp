class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
       int maj_ele=nums[0];
       int cnt=1;
       for(int i=1;i<n;i++)
       {
        if(nums[i]==maj_ele)
        cnt++;
        else
        cnt--;

        if(cnt==0)
        {
            maj_ele=nums[i+1];
        }
       }
       return maj_ele;
    }
};