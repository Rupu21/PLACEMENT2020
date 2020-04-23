class Solution {
public:
    int romanToInt(string s) {
        int number = 0;
        for (int i = 0; i != s.length(); ++i) {
            // NORMAL CASES
            if (s[i] == 'I') number += 1;
            if (s[i] == 'V') number += 5;
            if (s[i] == 'X') number += 10;
            if (s[i] == 'L') number += 50;
            if (s[i] == 'C') number += 100;
            if (s[i] == 'D') number += 500;
            if (s[i] == 'M') number += 1000;
            
            // WITH SUBTRACTION
            if (i - 1 >= 0) {
                if (s[i] == 'M' && s[i - 1] == 'C') number -= 200;
                if (s[i] == 'D' && s[i - 1] == 'C') number -= 200;
                if (s[i] == 'L' && s[i - 1] == 'X') number -= 20;
                if (s[i] == 'C' && s[i - 1] == 'X') number -= 20;
                if (s[i] == 'V' && s[i - 1] == 'I') number -= 2;
                if (s[i] == 'X' && s[i - 1] == 'I') number -= 2;
            }
        }
        
        return number;
    }
};