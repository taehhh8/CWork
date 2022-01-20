#include <stdio.h>
// #include <stdlib.h>

int main ()
{
    // int c;
    // printf("Enter a value : ");
    // c = getchar(); //여러개를 넣어도 앞의 문자 하나만 가져온다. getchar
    // printf("\nYour entered value : ");
    // putchar(c);

    char strVar[100] = {0,};
    int iVar = 0;

    // printf("Input text : ");
    // gets(strVar);
    // // gets_s(strVar);  비쥬얼 스튜디오

    // printf("\nYour entered text : ");
    // puts(strVar);

    printf("Input text and number : ");
    scanf("%s %d", strVar, &iVar); //메모리에다 입력을 받는다.

    printf("\nYour entered text and number : %s, %d", strVar, iVar);



    return 0;
}