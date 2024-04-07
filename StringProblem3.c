Trolls are attacking your comment section!
A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.
Your task is to write a function that takes a string and return a new string with all vowels removed.
For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

CODE:

#include <stdlib.h>
#include<string.h>

char *disemvowel(const char *str)
{
	  char *result=malloc(strlen(str)+1);
    int index=0;
    for(int i=0;i<strlen(str);i++){
      if (str[i]!='A' && str[i]!='a' && str[i]!='E' && str[i]!='e' &&
         str[i]!='O' && str[i]!='o' && str[i]!='i' && str[i]!='I' && str[i]!='U' && str[i]!='u'){
        result[index++]=str[i];
      }
    }
  result[index]='\0';

  
  return result;
}


