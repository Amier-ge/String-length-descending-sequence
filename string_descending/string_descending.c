#include<stdio.h>
#include<string.h>

void exchange_word(char *, char *);
int main() {

	char animal[5][9] = {"dog", "elephant", "monkey", "rabbit", "tiger"};	
	char *ptr_animal[5];
	int i, j;

	for(i = 0 ; i < 5 ; i++) ptr_animal[i] = animal[i];

	for(i = 0 ; i < 4 ; i++){
		for(j = i + 1 ; j < 5 ; j++){
			if( strlen(ptr_animal[i]) < strlen(ptr_animal[j]) ) exchange_word(ptr_animal[i], ptr_animal[j]);
		}
	}

	for(i = 0 ; i < 5 ; i++) printf("%d. %s\n", i+1, ptr_animal[i]);

	return 0;
}	

void exchange_word(char *word1, char *word2){

	char temp[80];

	strcpy(temp, word1);
	strcpy(word1, word2);
	strcpy(word2, temp);
}