class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(auto i:strs){
            encoded+=to_string(i.size())+'#'+i;
        }
        return encoded;
    }

     vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;

        while (i < (int)s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));
            i = j + 1;
            decoded.push_back(s.substr(i, len));
            i += len;
        }

        return decoded;
    }
};
