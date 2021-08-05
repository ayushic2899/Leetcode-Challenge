Input: piles = [5,3,4,5]
Output: true
Explanation: 
Alex starts first, and can only take the first 5 or the last 5.
Say he takes the first 5, so that the row becomes [3, 4, 5].
If Lee takes 3, then the board is [4, 5], and Alex takes 5 to win with 10 points.
If Lee takes the last 5, then the board is [3, 4], and Alex takes 4 to win with 9 points.
This demonstrated that taking the first 5 was a winning move for Alex, so we return true.
  `````


class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alex=0;
        int lee=0;
        int l =0;
        int r=piles.size()-1;
        
        int d=0;
        while(l<=r){
            if(d==0){
                 if(piles[l]<piles[r]){
                    alex=alex+piles[r];
                    r--;
                }
                else{
                    alex=alex+piles[l];
                    l++;
                }
                
            }
            else if(d==1)
            {
                if(piles[l]>piles[r]){
                    lee=lee+piles[r];
                    r--;
                }
                else{
                    lee=lee+piles[l];
                    l++;
                }
                
            }
            d=(d+1)%2;        
        }
        if(alex>lee){
            return true;
        }
        else{
            return false;
        }
    }
};
