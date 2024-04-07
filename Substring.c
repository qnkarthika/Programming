
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false


#include<string.h>
#include <stdio.h>


int  isEqual(char *a,char *b){
    int len1=strlen(a);
    int len2=strlen(b);
    if(len2>len1){
        return 0;
    }
    return strcmp(a+len1-len2,b) == 0;
    
}
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    printf("%s",isEqual(a,b)?"true":"false");

    return 0;
}
