/*----
  signature: removeDuplicates: int[] -> int
  purpose: either:
           testing program for the function removeDuplicates
           which will overwrite duplicates with other
           elements further down the array.

  by: Mikey
  last modified: 2-21-22
----*/


#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "removeDuplicates.h"

/*
  int i, j = 0;
  int count = 1;
  if i == j then
    then do nothing;
  else
    increment i by one
    and set A[i] = A[j];
  return count
*/
const int ARRSIZE = 3;
/*
  In this leetcode problem it only ask that we remove the
  duplicates by overwriting them and not actually changing
  the array by actually removing the values or altering
  the array in anyway. So if you were to run this on your
  pc you will see in the terminal the values still.
  Also note that for this leetcode problem that array
  was in sorted order!
*/
int removeDuplicates(int arr[])
{
    int i = 0;

    for(int j = 0; j < ARRSIZE; j++) {
      if(arr[i] != arr[j]) {
        i++;
        arr[i] = arr[j];
      }
    }
    return i + 1;
}
