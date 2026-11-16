#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	
	char word1[200];
	char word2[200];
	
	scanf("%s", word1);
	scanf("%s", word2);
	
	printf("word1: %s\n", word1);
	printf("word2: %s\n", word2);
    
    for (int i = 0; i < n; i++) {
         printf("word1: %s\n", word1);
	     printf("word2: %s\n", word2);
	     
    	}
    	
    int length1 = strlen(word1);
    int length2 = strlen(word2);
    
    printf("word1: %s (length: %d)\n", word1, length1);
    printf("word2: %s (length: %d)\n", word2, length2);
    
    if (strcmp(word1, word2) == 0) {
    	printf("comparison: identical\n");
    	
    } else {
    	printf("comparison: difference\n");
    	
    }
    char combined[200];
    strcpy(combined, word1);
    strcat(combined, " ");
    strcat(combined, word2);
    
    printf("combined: %s\n", combined);
    
    // end
    
}
