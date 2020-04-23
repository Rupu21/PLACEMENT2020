class Solution {
public:
    string intToRoman(int num) {
        string ch[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int weight[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string ans;
        for(int i=0;i<13;i++){
            int div = num/weight[i];
            num = num%weight[i];
            for(int j=0;j<div;j++)
                ans+=ch[i];
        }
        return ans;
    }
};