class Solution {
public:

    int expand(string& s, int L, int R) {

        while(L >= 0 && R < s.length() && s[L] == s[R]){
            L--;
            R++;
        }
        return R - L - 1; //length of Palindrome
    }

    string longestPalindrome(string s) {
        
       int n = s.length();

       int start = 0, end = 0;

       for(int i = 0; i < n; i++){

            int len1 = expand(s, i, i);       //odd length
            int len2 = expand(s, i, i + 1);   //even length
            int len = max(len1, len2);

            if(len > end - start){
                start = i - (len - 1)/2;
                end = i + len/2;
            }
       }
            return s.substr(start, end - start + 1); 
    }
};
