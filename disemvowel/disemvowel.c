#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "disemvowel.h"


char* trashVowels(char* str){
    int len = strlen(str);
     char* withoutVowels = (char*)calloc(len + 1,sizeof(str));
      withoutVowels[0] = '\0';
    int i, j=0;
	for(i = 0; i < len;i++){
		if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
			       	str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
                    withoutVowels[j]=str[i];
                    j++;
		}
	}
	printf("%d",j);
	withoutVowels[j] = '\0';
        return withoutVowels;
}
			
char* disemvowel(char* str) {
return trashVowels(str);
//return (char*) "";
}
