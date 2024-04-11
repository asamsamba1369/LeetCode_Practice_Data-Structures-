class Solution {
public:
    int palindrome(const string &S, int leng, int sindx)
	{
	   if(sindx>leng/2)
	    return 1;
	    else
	    {
	        if(S[sindx]==S[leng-1-sindx])
	        return palindrome(S,leng,sindx+1);
	        else
	        return 0;
	    }
       
	}
	
    bool isPalindrome(string S) {
			string str="";
			for(int i=0;i<S.length();i++)
			{
				if((S[i]>='a' && S[i]<='z') || (S[i]>='A' && S[i]<='Z') || (S[i]>='0' && S[i]<='9'))
				{
					if(S[i]>='A' && S[i]<='Z')
					{
						S[i]=S[i]-'A'+'a';
					}
					str+=S[i];
				}
			}
      int sindx=0;
      cout<<str;
	    int leng=str.length();
			if(leng==0 || leng==1)
			return 1;
	    int ans=palindrome(str,leng,sindx);
	    return ans;
    }
};