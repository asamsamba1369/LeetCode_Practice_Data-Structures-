class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();
        int n=min(n1,n2);
        string ans="";
        for(int i=0;i<n;i++)
        {
            ans+=word1[i];
            ans+=word2[i];
        }
        if(n1==n2)
        return ans;
        else if(n==n1)
        {
            ans+=word2.substr(n,n2);
            return ans;
        }
        else
        {
            ans+=word1.substr(n,n1);
            return ans;
        }
    }
};