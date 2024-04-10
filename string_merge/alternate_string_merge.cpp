#include <iostream>
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0 ; int j = 0;
        std::string word;
        while(i < word1.length() || j< word2.length()){

            if(i < word1.length()) word += word1[i++];
            if(j < word2.length()) word += word2[j++];
        }
        return word;

        
    }
};