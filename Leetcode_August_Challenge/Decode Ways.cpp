Example 1:

Input: s = "12"
Output: 2
Explanation: "12" could be decoded as "AB" (1 2) or "L" (12).
  
  ```````

class Solution {
public:
    int numDecodings(string s) {
        if(s.length()==0 || s[0]=='0'){
            return 0;
        }
        if(s.length()==1){
            return 1;
        }
        int count1=1;//prev to prev
        int count2=1;//prev sol
        for(int i=1;i<s.length();i++){
            int d=s[i]-'0';
            int dd=(s[i-1]-'0')*10+d;
            int count=0;
            if(d>0){
                count+=count2;
            }
            if(dd>=10 && dd<=26){
                count+=count1;
            }
            count1=count2;
            count2=count;
         }
        return count2;
 }
    
    
};
