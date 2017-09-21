#include <stdlib.h>
#include <stdio.h>

#include "disemvowel.h"


int countVowels(char* str){
	int counter = 0;
	for(unsigned i = 0; i < sizeof(str);i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			counter++;
		}
	}
	printf(counter + "");
	return counter;
}

			
char* disemvowel(char* str) {
//printf(countVowels(str) +"");
  return (char*) "";
}
