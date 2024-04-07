Write a function that takes in a string of one or more words, and returns the same string, but with all words that have five or more letters reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

Examples:

"Hey fellow warriors"  --> "Hey wollef sroirraw" 
"This is a test        --> "This is a test" 
"This is another test" --> "This is rehtona test"

CODE:

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void spin_words(const char *sentence, char *result) {
       char *copy=malloc(strlen(sentence)+1);
       strcpy(copy,sentence);
       int index=0;
       char *word=strtok(copy," ");
       while(word!=NULL){
              int len=strlen(word);
              if(len>=5){
                 for(int i=0;i<len/2;i++){
                      char temp=word[i];
                      word[i]=word[len-i-1];
                      word[len-i-1]=temp;
                 }
              }
            for(int i=0;i<len;i++){
                result[index++]=word[i];
            }
          char *nextWord = strtok(NULL, " "); 
        if (nextWord != NULL) {
            result[index++] = ' '; 
        }
        
        word = nextWord; 
        
       }
    result[index]='\0';
  printf("%s",result);
}
