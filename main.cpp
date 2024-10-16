#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void Result(const char* result) {
    printf("%s\n", result);
}


void DiceGame(void (*resultCallback)(const char*)) {
    int diceRoll;
    char player[4];


    printf("奇数なら「奇」、偶数なら「偶」と入力してください : ");
    scanf_s("%s", player, (unsigned)_countof(player));


    unsigned int currentTime = time(nullptr);
    srand(currentTime);
    diceRoll = rand() % 6 + 1;


    printf("loading.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".\n");
    Sleep(1000);

    if ((diceRoll % 2 == 0 && strcmp(player, "偶") == 0) || (diceRoll % 2 != 0 && strcmp(player, "奇") == 0)) {
        resultCallback("正解!");
    }

    else {
        resultCallback("不正解!");
    }


    printf("dice %d.\n", diceRoll);
}

int main(void) {

    DiceGame(Result);
    return 0;
}