class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int sLen = 0;
        int count = 0;
        int len = s.length();
        std::unordered_map<char,int> map;
        std::unordered_map<char,int>::iterator test;

        for(int i = 0; i < len; i++) {

            test = map.find(s[i]);

            if(test == map.end()) {
                count++;
                map[s[i]] = i;
            }
            else {
                count = ((i - test->second) > count) ? (count + 1):(i - test->second);
                map[s[i]] = i;
            }
            sLen = (count >= sLen) ? count:sLen;
        }
        return sLen;
    }
};