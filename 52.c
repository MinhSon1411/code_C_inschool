#include <stdio.h>
#include <string.h>
#include <ctype.h>

void hanh(char *c){
    int i;
    int size = strlen(c);
    for(i = 0; i< size; i++){
        c[i] = toupper(c[i]);
    }
    printf("%s", c);
}
int main() {
    char x[100];
    fgets(x, 99, stdin);
    hanh(x);
    }