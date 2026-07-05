class Solution {
public:
    bool isPalindrome(string s) {
        string ss;
        for(auto i:s){
            if((i>='a' && i<='z') ||( i>='0' && i<='9')){
                ss=ss+i;
            }
            else if(i>='A' && i<='Z'){
                char t=i+'a'-'A';
                ss=ss+(t);
            }
            
        }
        string temp = ss;
        reverse(temp.begin(),temp.end());
        return ss.compare(temp)==0;
    }
};
