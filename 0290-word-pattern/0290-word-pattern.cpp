class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        stringstream ss(s);
        string word;
        int i = 0;

        while (ss >> word) {

            
            if (i >= pattern.size()) {
                return false;
            }

            
            if (charToWord.find(pattern[i]) != charToWord.end()) {
                if (charToWord[pattern[i]] != word) {
                    return false;
                }
            }

           
            if (wordToChar.find(word) != wordToChar.end()) {
                if (wordToChar[word] != pattern[i]) {
                    return false;
                }
            }

            
            charToWord[pattern[i]] = word;
            wordToChar[word] = pattern[i];

            i++;
        }

        
        return i == pattern.size();
    }
};