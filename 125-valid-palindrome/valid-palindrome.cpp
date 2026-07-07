class Solution {
public:
    bool isPalindrome(string s) {
        char c;
        for(int i=0; i<s.length(); ){
            c=s[i];
            if (isalnum(c)){
                i++;
            }
            else
                s.erase(i, 1);
        }
        for(int i=0; i<s.length()/2; i++){
            if(tolower(s[i])==tolower(s[s.length()-i-1])) continue;
            else return false;
        }
        return true;
    }
};