class Solution {
public:
    string reverseWords(string s) {
        stack<string>temp;
        string ans="";

        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(ans.length()>0){
                    temp.push(ans);
                } 
                ans="";
                
            }
            else{
                 ans+=s[i];
            }
        }
        if(ans.length()>0){
            temp.push(ans);
        }
        ans="";
        while(!temp.empty()){
            ans+=temp.top();
            temp.pop();
            if(!temp.empty()){
                ans+=" ";
            }
        }
        return ans;
    }
};

   
        

