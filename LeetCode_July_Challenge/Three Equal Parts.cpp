class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        vector<int>ans={-1,-1};
        int numsof1s=0,n=arr.size();
        for(int i=0;i<n;i++){
            numsof1s+=arr[i];
        }
        if(numsof1s%3 != 0){
            return ans;
        }
        if(numsof1s==0){
            vector<int>a={0,2};
            return a;
        }
        int numOf1sInEachPart=numsof1s/3;
        numsof1s=0;
        int first=-1,second=-1,third=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                numsof1s++;
                if(numsof1s == 1){
                    first=i;
                }
                else if(numsof1s == (numOf1sInEachPart+1)){
                    second=i;
                }
                else if(numsof1s == (2 * numOf1sInEachPart + 1)){
                    third=i;
                }
            }
        }
        
        while(third < n){
            if(arr[first] == arr[third] && arr[second] == arr[third]){
                first++;
                second++;
                third++;
            }
            else{
                return ans;
            }
        }
        
        return {first - 1, second};                
    }
};
 
  
