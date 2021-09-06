Example 1:

Input: releaseTimes = [9,29,49,50], keysPressed = "cbcd"
Output: "c"
Explanation: The keypresses were as follows:
Keypress for 'c' had a duration of 9 (pressed at time 0 and released at time 9).
Keypress for 'b' had a duration of 29 - 9 = 20 (pressed at time 9 right after the release of the previous character and released at time 29).
Keypress for 'c' had a duration of 49 - 29 = 20 (pressed at time 29 right after the release of the previous character and released at time 49).
Keypress for 'd' had a duration of 50 - 49 = 1 (pressed at time 49 right after the release of the previous character and released at time 50).
The longest of these was the keypress for 'b' and the second keypress for 'c', both with duration 20.
'c' is lexicographically larger than 'b', so the answer is 'c'.
  
  ```````````````````````



class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int ans;
        ans=releaseTimes[0];
        int index=0;
     
        int n=releaseTimes.size();
        for(int i=1;i<n;i++){
            if(releaseTimes[i]-releaseTimes[i-1]>ans){
                ans=releaseTimes[i]-releaseTimes[i-1];
                index=i;
            }
            else if (releaseTimes[i]-releaseTimes[i-1]==ans ){
                if (keysPressed[index]<keysPressed[i]){
                    index=i;
                }
            }
        }
        return keysPressed[index];
    }
};
