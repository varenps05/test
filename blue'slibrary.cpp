#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
	printf ("\t\t\t\tWelcome to Blues Library\n");
	printf ("\t\t\t\t========================\n\n");
	
	char title[4][50], author[4][50], year[4][5];
	for (int i = 0; i < 4; i++){
	printf ("Insert book title : ");
	scanf (" %[^\n]s", title[i]);
	
	printf ("Insert book author : ");
	scanf (" %[^\n]s", author[i]);
	
	printf ("Insert book published year : ");
	scanf (" %[^\n]s", &year[i]);
	
	printf ("\n");
	}
	
	printf ("Processing...\n\n");
	printf ("Our Collections :\n");
	
	
	for (int k = 0; k < 4; k++){
		printf ("%d. Shelf Code : ", k+1);
		printf ("%c", title[k][0]);
		for (int m = 0; m < strlen(title[k]); m++){
			if (title[k][m] == ' '){
				printf ("%c", title[k][m+1]);
			}
		} printf ("\n");  
		
		printf ("   Book Code : %c%c%s\n", title[k][0], author[k][0], year[k]);
		printf ("   Title : %s\n", title[k]);
		
		for (int j = 0; j < strlen(author[k]); j++){
			if (author[k][j] >= 'a' && author[k][j] <= 'z'){
				author[k][j] -= 32;
			}
		} 
		printf ("   Author : %s\n", author[k]);
		printf ("   Publish Year : %s\n", year[k]);
	}
	
	return 0;
}
