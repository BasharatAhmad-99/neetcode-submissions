class Solution {
public:
bool ischar(char a){
    return (a>='a' && a<='z') || (a>='A' && a<='Z') || (a>='0' && a<='9');
}
    bool isPalindrome(string s) {
        int n=s.size()-1;
        int i=0;
        
        i=0;
        while(i<=n){
            if((ischar(s[i])) && (ischar(s[n]))){
                char f=tolower(s[i]);
                char l=tolower(s[n]);
                if(f!=l){
                    return false;
                }
                i++;
                n--;
                continue;
            }
            if((ischar(s[i])) && !(ischar(s[n]))){
                n--;
                continue;
            }
            if(!(ischar(s[i])) && (ischar(s[n]))){
                i++;
                continue;
            }
            i++;
            n--;
        }
        return true;
    }
};
