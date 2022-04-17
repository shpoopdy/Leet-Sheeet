/*1346. Rotate Array:
  Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

  Example 1:

  Input: arr = [10,2,5,3]
  Output: true
  Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.

  Example 2:

  Input: arr = [7,1,14,11]
  Output: true
  Explanation: N = 14 is the double of M = 7,that is, 14 = 2 * 7.

  Example 3:

  Input: arr = [3,1,7,11]
  Output: false
  Explanation: In this case does not exist N and M, such that N = 2 * M.

*/

bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int x:arr) {
            if( x == 0) {
              continue;
            }
            if(binary_search(arr.begin(), arr.end(), 2*x)) {
                return true;
            }
        }
        if(count(arr.begin(),arr.end(),0)>1) {
            return true;
        }
        return false;
    }
