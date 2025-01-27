#include "Enemy.h"

//Constructor:Initialize
Enemy::Enemy() : phase_(Phase::Approach) {}

void Enemy::Update()
{
	(this->*funcTable[static_cast<size_t>(phase_)])();
}

void Enemy::SetPhase(Phase newPhase)
{
	phase_ = newPhase;
}

void Enemy::Approach()
{
	cout << "Enemy is approaching" << endl;
}

void Enemy::Shoot()
{
	cout << "Enemy is shooting" << endl;
}

void Enemy::Retreat()
{
	cout << "Enemy is retreating" << endl;
}

void (Enemy::* Enemy::funcTable[])() = {
	&Enemy::Approach, // Phase::Approach
	&Enemy::Shoot,    // Phase::Shoot
	&Enemy::Retreat   // Phase::Retreat
};