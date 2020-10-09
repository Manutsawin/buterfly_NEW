#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
void passvalue(int* loop2, int* num, int* x1, int* x2, int* sp);
int main()
{
    struct data
    {
        int num, loop, loop2, x1, x2, sp, c, slen;
    }num;
    num.x1 = 1;
    num.x2 = 1;
    num.c = 0;
    char s[101];
    scanf("%d", &num.num);
    scanf("%s", &s);
    num.slen = strlen(s);
    num.sp = (num.num - 1) + (num.num - 2);
    for (num.loop2 = 0; num.loop2 < (num.num * 2) - 1; num.loop2++)
    {
        for (num.loop = 0; num.loop < num.x1; num.loop++)
        {
            printf("%c ", s[num.c]);
            num.c++;
            if (num.c == num.slen)
            {
                num.c = 0;
            }
        }
        for (num.loop = 0; num.loop < num.sp; num.loop++)
        {
            printf("  ");
        }
        for (num.loop = 0; num.loop < num.x2; num.loop++)
        {
            printf("%c ", s[num.c]);
            num.c++;
            if (num.c == num.slen)
            {
                num.c = 0;
            }
        }

        passvalue(&num.loop2, &num.num, &num.x1, &num.x2, &num.sp);

        printf("\n");
    }

    return 0;
}
void passvalue(int* loop2, int* num, int* x1, int* x2, int* sp)
{
    if (*loop2 <= *num - 1)
    {
        *x1 += 1;
        *x2 += 1;
        *sp -= 2;
    }
    else
    {
        *x1 -= 1;
        *x2 -= 1;
        *sp += 2;
    }

    if (*loop2 == *num - 1)
    {
        *x1 = *num - 1;
        *x2 = *num - 1;
        *sp = 1;
    }
    if (*loop2 == *num - 2)
    {
        *x1 -= 1;
    }

}

