#include <stdio.h>
# include<stdbool.h>
bool isPalindrome(int x)
{
    int original = x;
    long reverse = 0;
    int r;

    if(x < 0)
    {
        return 0;
    }
    while(x!=0)
    {  
        r = x %10;
        reverse = reverse*10 + r;
        x = x/10; 
    }
    return  original == reverse;
}
