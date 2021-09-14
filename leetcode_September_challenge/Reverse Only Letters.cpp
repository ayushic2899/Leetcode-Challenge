class Solution {
public:
    string reverseOnlyLetters(string s) {
       int l=0;
        int e=s.size()-1;
        while(l<=e){
            if((s[l]>='a' && s[l]<='z') || (s[l]>='A' && s[l]<='Z')){
                if((s[e]>='a' && s[e]<='z') || (s[e]>='A' && s[e]<='Z')){
                    swap(s[l],s[e]);
                    l++;
                    e--;
                } 
                else{
                    e--;
                }
            }
            else{
                l++;
            }
        }
        return s;
    }
};
