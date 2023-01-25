#include"Enemy.h"
#include<stdio.h>
int Enemy::Enemyflag;
int main() {
	Enemy* enemy1 = new Enemy();
	Enemy* enemy2 = new Enemy();
	Enemy* enemy3 = new Enemy();
	int input;
	while (true) {
		enemy1->Draw();
		enemy2->Draw();
		enemy3->Draw();
		printf("0:exit 1:continue==> ");
		scanf_s("%d", &input);
		if (input == 1)
		{
			enemy1->Update();
		}
		if (input == 0)
		{
			break;
	
		}
	}
	delete enemy1;
	delete enemy2;
	delete enemy3;
	return 0;
}