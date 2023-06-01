#include "logic.h"

char IsPalindrome(int num)
{
    char isPalindrome = 0;
    if (num >= 0)
    {
        if (num < 10)
            isPalindrome = 1;
        else
        {
            int n = num, rev = 0;
            while (num)
            {
                rev = rev * 10 + num % 10;
                num = num / 10;
            }
            isPalindrome = (char) (n == rev);
        }
    }
    return isPalindrome;
}
