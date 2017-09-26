#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "disemvowel.h"


char* trashVowels(char* str){
    char*  withoutVowels;
    withoutVowels = (char*)malloc(sizeof(str));
    withoutVowels[0] = '\0';
    unsigned i, j=0;
	for(i = 0; i < sizeof(str);i++){
		if(str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u'){
                    withoutVowels[j]=str[i];
                    j++;
		}
	}
        return withoutVowels;
}
			
char* disemvowel(char* str) {
return trashVowels(str);
//return (char*) "";
}
