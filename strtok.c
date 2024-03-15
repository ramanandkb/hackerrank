/*
input  :This is C
output: 
        this 
        is 
        C
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char *tok=strtok(s," ");
    while (tok!=NULL) {
        printf("%s\n",tok);
        tok=strtok(NULL," ");
    }
    return 0;
}