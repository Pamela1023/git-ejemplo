#include <stdio.h>

#include <string.h>

void repeat_chars(char *str) {
    int len = strlen(str);
    char new_str[len * 2];
    int j = 0;

    for (int i = 0; i < len; i++) {
        new_str[j] = str[i];
        j++;
        new_str[j] = str[i];
        j++;
    }

    new_str[j] = '\0';

    strcpy(str, new_str);

}


int main() {
    char str[100];

    printf("Ingrese una cadena: ");
    scanf("%s", str);

    repeat_chars(str);

    printf("La cadena repetida es: %s", str);

    return 0;
}


