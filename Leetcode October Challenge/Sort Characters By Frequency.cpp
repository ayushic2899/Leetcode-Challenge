class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
       unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>maxh;
        for(auto it=mp.begin();it!=mp.end();it++){
            maxh.push({it->second,it->first});
        }
        string str;
        while(maxh.size()!=0){
            int freq=maxh.top().first;
            while(freq--){
                str+=maxh.top().second;
            }
            maxh.pop();
        }
        return str;
    }
};


 
       
