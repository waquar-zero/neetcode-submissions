class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;

        for (char c : s) {
        freq1[c]++;
        }
        for (char d : t) {
        freq2[d]++;
        }

        if(freq1 == freq2){
            return true;
        }
        return false;
    }
};