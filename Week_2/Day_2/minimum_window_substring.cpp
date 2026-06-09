class Solution {
public:
    string minWindow(string s, string t) {
        
        if(s.empty() || t.empty()) return "";

        vector<int> tCount(128, 0);   //taking 128 because it can have both upper and lower case
        vector<int> wCount(128, 0);

        for(int i = 0; i < t.length(); i++){
            tCount[s[i]]++;
        }

        int L = 0;
        int need = t.length();
        int minLen = INT_MAX;
        int minStart = 0;

        for(int R = 0; R < s.length(); R++){
            wCount[s[R]]++;

            if(wCount[s[R]] <= tCount[s[R]]) need--;

            while(need == 0){
                if(R - L + 1 < minLen) {
                    minLen = R - L + 1;
                    minStart = L;
                }
                wCount[s[L]]--;
                
                if(wCount[s[L]] < tCount[s[L]]) need++;
                L++;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};
