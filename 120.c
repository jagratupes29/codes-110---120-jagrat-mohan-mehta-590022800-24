#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int newSentence = 1;

    for (int i = 0; str[i]; i++) {
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
            newSentence = 1;
    }

    printf("%s", str);
    return 0;
}
