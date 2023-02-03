#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


int main() {
	char nname[50];
	int c;
	char st;
	//var

	system("title RockScissorsPaper Game");
	//title

	printf("Please, enter your nickname\n");
	printf("=> ");
	scanf("%s", nname);
	//set nickname

	system("cls");

	while (1) {
		printf("Hello %s, do you want to continue this game?(y/n)  ", nname);
		scanf(" %c", &st);

		if (st == 'y' || st == 'Y') {
			system("cls");
			break;
		}
		else if (st == 'n' || st == ' N') {
			system("cls");
			printf("\n\nProgram is over...\n\n");
			exit(0);
		}
		else {
			system("cls");
			printf("\nEnter again please...\n\n");
		}
	}
	
	printf("\nYour turn, %s\n", nname);
	printf("Rock(1), Scissors(2), Paper(3)\n");
	printf("=> ");
	scanf("%d", &c);

	srand(time(NULL));
	int random = rand() % 3 + 1;
	printf("\nIt's AI turn\n");
	printf("Rock(1), Scissors(2), Paper(3)\n");
	printf("=> %d", random);

	if (c == 1 && random == 2 || c == 2 && random == 3 || c == 3 && random == 1) {
		printf("\n\n\n%s, you won!!!\n\n", nname);
	}
	else {
		if (c == 2 && random == 1 || c == 3 && random == 2 || c == 1 && random == 3) {
			printf("\n\n\n%s, you lost...\n", nname);
			printf("You can try again next time...\n\n");
		}
		else if (c == random) {
			printf("\n\n\nDrew...\n");
			printf("You can try again next time...\n\n");
		}
	}
}