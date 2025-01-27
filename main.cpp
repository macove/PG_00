#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "Enemy.h"

void LodingMessage(const char* message, int delayTime, int dots = 3) {
	printf("\n%s", message);
	for (int i = 0; i < dots; ++i) {
		Sleep(delayTime);
		printf(".");
	}
	printf("\n");
}


int main(void) {
	Enemy enemy;
	printf("Initial Phase:");
	enemy.Update();
	enemy.SetPhase(Enemy::Phase::Shoot);
	LodingMessage("After Changing to Phase.", 1000);
	printf("After Phase:");
	enemy.Update();
	enemy.SetPhase(Enemy::Phase::Retreat);
	LodingMessage("After Changing to Phase.", 1000);
	printf("After Phase:");
	enemy.Update();

}