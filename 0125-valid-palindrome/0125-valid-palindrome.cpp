class Solution {
public:
bool check_string(string& s,int l,int r){
    if(l>=r){
        return true;
    }
    else if(!isalnum(s[l])){
     return check_string(s,l+1,r);
    }
    else if(!isalnum(s[r])){
        return check_string(s,l,r-1);
    }
    else if(tolower(s[l])!=tolower(s[r])){
        return false;
    }
    return check_string(s,l+1,r-1);
}
    bool isPalindrome(string s) {
        return check_string(s,0,s.length()-1);
    }
};