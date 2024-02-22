#include <string>
#include <map>

// https://leetcode.com/problems/valid-anagram/description/
/* O(n) time complexity, O(n) space complexity */

class Solution {
public: 
      bool isAnagram(std::string s, std::string t) {

        std::map<char, int> sHashMap;
        std::map<char, int> tHashMap;

        if(s.size() != t.size()) return false;

        for(int i = 0; i < s.length(); i++){
            
            sHashMap[s[i]]++;
            tHashMap[t[i]]++;

        }

        return sHashMap == tHashMap;
    }
};