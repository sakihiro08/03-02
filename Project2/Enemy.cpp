#include "Enemy.h"
#include<stdio.h>
Enemy::Enemy()
{
	Enemyflag = 1;
}

Enemy::~Enemy()
{
}

void Enemy::Update()
{
	Enemyflag = 0;
}

void Enemy::Draw()
{
	if (Enemyflag == 1) {
		printf("(enemy draw)\n");
	}
}

