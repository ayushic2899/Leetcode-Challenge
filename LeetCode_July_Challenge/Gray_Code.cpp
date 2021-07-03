class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>a;
        for(int i=0;i<pow(2,n);i++){
            a.push_back((i^(i/2)));
        }
        return a;
    }
};
