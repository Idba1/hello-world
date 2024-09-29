// Pre-increment (++a) বা pre-decrement (--a) মান পরিবর্তন করে আগে।
// Post-increment (a++) বা post-decrement (a--) মান পরিবর্তন করে পরে।

#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d \n", a++);
    printf("%d \n", ++a);
    printf("%d \n", --a);
    printf("%d \n", a--);
    printf("%d \n",a);
    printf("%d \n",a+=5);
    printf("%d \n",a-=5);
    return 0;
}