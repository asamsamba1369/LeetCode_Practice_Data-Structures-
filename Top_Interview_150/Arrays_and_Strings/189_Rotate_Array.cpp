class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n; // becareful with the constraints
        // reversing the different parts of the vector
        // Reverse the subrange from the element at index 1 to the element at index 4
        //reverse(nums.begin() + 1, nums.begin() + 5);
        reverse(nums.begin(),nums.begin()+n-k);
        reverse(nums.begin()+n-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};