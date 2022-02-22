#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "array/removeDuplicates.h"
using namespace std;



const int ARRSIZE = 3;
int spaghetti[] = {1, 1, 2};

int main()
{
    cout << boolalpha;

    removeDuplicates(spaghetti);

    for(int i = 0; i < ARRSIZE; i++) {
      cout << spaghetti[i] << endl;
    }



    return EXIT_SUCCESS;
}
