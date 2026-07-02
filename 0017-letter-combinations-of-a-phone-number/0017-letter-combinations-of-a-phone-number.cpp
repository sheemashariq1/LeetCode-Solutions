class Solution {
public:
void solve(int index, string& digits,string current, vector<string>& result,vector<string>& mapping) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '0'];

        for (char ch : letters){
            solve(index + 1, digits,current+ch,result,mapping);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) return result;
         vector<string> mapping = {"","","abc","def","ghi", "jkl","mno","pqrs","tuv",  "wxyz"};
          solve(0, digits,"",result,mapping);
        return result;
    }
};