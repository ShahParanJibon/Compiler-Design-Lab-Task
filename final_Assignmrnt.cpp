#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;
int moveState(int current, char input)
{
    if(current == 0)
    {
        if(input == 'a')
            return 1;
    }

    else if(current == 1)
    {
        if(input == 'a')
            return 1;

        if(input == 'b')
            return 2;
    }

    else if(current == 2)
    {
        if(input == 'b')
            return 2;

        if(input == 'a')
            return 1;
    }

    return -1;
}
bool checkString(string text)
{
    int state = 0;
    int i = 0;

    while(i < text.length())
    {
        state = moveState(state, text[i]);

        if(state == -1)
            return false;

        i++;
    }

    return (state == 1 || state == 2);
}
int main()
{
   
    string arr[] ={"ab","abb","aab","aaabbb","bba"};
    
    
    return 0;
}



