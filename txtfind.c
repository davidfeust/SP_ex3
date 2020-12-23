#include <stdio.h>
#include <string.h>

#define LINE 256
#define WORD 30

int subString(char *str1, char *str2) {
    char *s2 = str2;
    for (int i = 0; str2 ; ++i) {
        if (*str2 == *str1) {
            str1++;
            str2++;
        } else {
            str1++;
            str2 = s2;
        }
        if(!str2){
            return 1;
        }
    }
    return 0;
}

void getWord(char word[30]) {
    scanf("%s", word);
}

int getLine(char line[LINE]) {

    int i = -1;
    do {
        i++;
        scanf("%c", line + i);
    } while (line[i] != '\n');

    return i + 1;

}

int main() {
    char word[WORD];
//    printf("enter word and option\n");
//    getWord(word);
//    printf("word = %s  ", word);
//    char option;
//    scanf("%s", &option);
//    printf("option = %c\n", option);
    int there_is_a_line;
    do {
        char line[LINE];
//        printf("enter line\n");
        there_is_a_line = getLine(line);
        printf("%s\n", line);
//        if (option == 'a') {
//            if (substring()) {
//
//            }
//        } else {
//

//        }
    } while (there_is_a_line);

    return 0;
}
