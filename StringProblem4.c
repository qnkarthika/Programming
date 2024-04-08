accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"

PROGRAM:

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void *accum(const char *source) {
   
    char *copy = malloc(strlen(source) + 1);
    if (copy == NULL) {
       
        return NULL;
    }
    strcpy(copy, source);

    
    char *result = malloc(((strlen(source)*strlen(source))+1) + 1);
    if (result == NULL) {
       
        free(copy);
        return NULL;
    }

    int k = 0;
    int length = strlen(copy);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                result[k++] = toupper(copy[i]);
            } else {
                result[k++] = tolower(copy[i]);
            }
        }
        result[k++] = '-';
    }
    result[k-1] = '\0'; 

    printf("%s", result);

  \
    free(copy);
    return result;
}

int main() {
    const char *source = "ZpglnRxqenU";
    accum(source);
    return 0;
}

