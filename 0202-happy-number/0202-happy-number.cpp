class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        int digit;
        int sum;
        
        while (n != 1) {
            if (seen.find(n) != seen.end()) {
                return false;
            }
            seen.insert(n);
            sum = 0;
            while (n > 0){
                
                digit = n % 10;
                sum += digit * digit;
                n = n / 10;
            }
            n = sum;
        }
        return true;
    }
};