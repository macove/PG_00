#pragma once
#include <iostream>
using namespace std;
class Enemy
{

public:
    enum class Phase {
        Approach,
        Shoot,
        Retreat
    };

    Enemy();
    void Update();
    void SetPhase(Phase newPhase);


private:

    void Approach();
    void Shoot();
    void Retreat();

    Phase phase_;

    static void (Enemy::* funcTable[])();
};

