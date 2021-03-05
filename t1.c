#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* pour rand */

int main(void)
{
	int x = 0;
	int nb_user = 0;
	int chiffre_aleatoir;

	while (x == 0)
	{
		srand(time(NULL));
		chiffre_aleatoir = rand() % 9 + 1;
		putchar('\n');		
		printf("Pick a number between 1 and 9 >> ");
		scanf("%d", &nb_user);

		if(nb_user == chiffre_aleatoir)
		{		
			printf("You win, the secret number was %d\n", chiffre_aleatoir);
		}
		else
		{
			printf("You loose, the secret number was %d, not %d\n", chiffre_aleatoir, nb_user);
		}
        	printf("Try again ? 0: yes or 1: exit >> ");
		scanf("%d", &x);
	}
	return (0);
}
