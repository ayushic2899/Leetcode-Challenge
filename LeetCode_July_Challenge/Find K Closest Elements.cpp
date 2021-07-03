 // 2 pointer Approach

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0;
        int r=arr.size()-1;
        while(r-l >= k){
            if(x-arr[l] <= arr[r]-x){
                r--;
            }
            else{
                l++;
            }
        }
        return vector<int>(arr.begin()+l,arr.begin()+r+1);
    }
}; 
