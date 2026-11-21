// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;

    for(i = 0; str[i] != '\0'; i++){
        if(i == 0 && isalpha(str[i])){
            str[i] = toupper(str[i]);
        } else if(str[i-1] == ' ' && isalpha(str[i])){
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
    printf("Sentence case: %s", str);
    return 0;
}