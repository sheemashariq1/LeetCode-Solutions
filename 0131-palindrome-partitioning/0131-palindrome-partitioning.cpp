class Solution {
public:
void backtrack(int start, string& s, vector<string>& current, vector<vector<string>>& result) {
        if (start == s.size()) {
            result.push_back(current);
            return;
        }
        for (int i = start; i< s.size(); i++) {
            int low=start,high=i;
            bool ispalindrome=true;
            while(low<high){
                if(s[low++]!=s[high--]){
                    ispalindrome=false;
                    break;
                }
            }
            if (ispalindrome) {
                current.push_back(s.substr(start,i-start+1));         
                backtrack(i+1,s, current, result);  
                current.pop_back();                  
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> current;
        backtrack(0,s,current, result);
        return result;
    }
};