#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
	#include <windows.h>
#endif

int main(){
	printf("\e[0;33mQue voulez-vous enreistrer ?:\e[0;34m");
	char *string;
	fgets(string, 100, stdin);
	FILE *test = fopen("note.txt", "r");
	if (test != NULL)
	{
		fclose(test);
		printf("\e[0;31m");
		printf("Attention, ");
		printf("\e[0;37m");
		printf("Le fichier note.txt est déja éxistant, Voulez-vous l'écraser ?([O]ui/[n]on):");
		char rep;
		scanf("%c", &rep);
		if (rep == 'Y')
		{
			printf("Le fichier va être écrasé...\n");
		}
		else if (rep == 'n')
		{
			printf("Annulation...\n");
			exit(0);
		}
		else
		{
			printf("Veuillez entrer une réponse correcte.\n");
			exit(1);
		}
	}
	FILE *fichier = fopen("note.txt", "w+");
	fprintf(fichier, "%s", string);
	fclose(fichier);
	printf("\e[0;32mEnregistré\n\e[0;37m");
	return 0;
}
