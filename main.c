#include <stdio.h>

int main(){
	printf("Que voulez-vous enreistrer ?:");
	char *string;
	fgets(string, 100, stdin);
	FILE *fichier = fopen("note.txt", "w+");
	fprintf(fichier, "%s", string);
	fclose(fichier);
	printf("Enregistré\n");
	return 0;
}
