class Solution {
public:
void reverse_s(vector<char>& s,int l,int r){
    if(l>=r){
        return;
    }
    swap(s[l],s[r]);
    reverse_s(s,l+1,r-1);
}
    void reverseString(vector<char>& s) {
        reverse_s(s,0,s.size()-1);
    }
};