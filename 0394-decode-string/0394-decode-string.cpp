class Solution {
public:
   string decode(string& s, int&i){
    string res="";
    while(i<s.length() && s[i]!=']'){
        if(!isdigit(s[i])){
            res+=s[i++];
        }
        else{
            int k=0;
            while(i<s.length() && isdigit(s[i])){
                k=k*10+(s[i++]-'0');
            }
            i++;
            string nested=decode(s,i);
            i++;
            while(k-->0){
              res+=nested;
            }
        }
    }
    return res;
   }
    string decodeString(string s) {
        int i=0;
        return decode(s,i);
    }
};