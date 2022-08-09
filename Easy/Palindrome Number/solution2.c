#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x){
    if (x < 0){
        return false;
    } else {
        int forward = x;
        int remainder = -1;
        long int backward = 0;
        
        while (x != 0){
            remainder = x % 10;
            backward = backward*10 + remainder;
            x /= 10;
        }
        
        if (backward == forward){
            return true;
        } else {
            return false;
        }
        
    }
}