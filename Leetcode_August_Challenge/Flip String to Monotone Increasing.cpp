class Solution {
public:
    int minFlipsMonoIncr(string s) {
        stack<int>s1;
        int res=0;
        for(int i=s.length()-1;i>=0;i--){
          if(!s1.empty() && s[i]>s1.top()){
              res++;
              s1.pop();
          }
            if(s[i]=='0'){
                s1.push(s[i]);
            }
        }
        return res;
    }
};
 
