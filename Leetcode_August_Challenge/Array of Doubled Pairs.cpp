Given an array of integers arr of even length, return true if and only if it is possible to reorder it such that 
arr[2 * i + 1] = 2 * arr[2 * i] for every 0 <= i < len(arr) / 2.

Example 1:

Input: arr = [3,1,3,6]
Output: false

``````

class Solution {
public:
    static bool compare(int a,int b){
        return abs(a)<abs(b);
    }
    bool canReorderDoubled(vector<int>& A) {
        sort(A.begin(),A.end(),compare);
        unordered_map<int,int> m;
        for(int i=0;i<A.size();i++)m[A[i]]++;
        for(int i=0;i<A.size();i++){
            if(m[A[i]]==0)  
                continue;
            if(m[2*A[i]]==0)  
                return false;
            m[2*A[i]]--;
            m[A[i]]--;  
        }
        return true;
    }
};
