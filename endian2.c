#include<stdio.h>
int main(){
    union un{
        short val;
        char ch;
    };

    union un u;

    // u.val = 258;
    u.val = 257;

    printf("Before : u.val = %d\n", u.val);

    u.ch = 1;

    printf("After : u.val = %d\n", u.val);
    printf("After : u.ch = %d\n", u.ch);


}