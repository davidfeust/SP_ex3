#include <stdio.h>
#include <string.h>

#define LINE 256
#define WORD 30

int subString(char *str1, char *str2) {
    int c1 = 0;
    int c2 = 0;
    while (str1[c1]) {
        if (str2[c2] == str1[c1]) {
            c1++;
            c2++;
        } else {
            c1++;
            c2 = 0;
        }
        if (!str2[c2]) {
            return 1;
        }
    }
    return 0;
}

int similar(char *s, char *t, int n) {
    if (strlen(t) + n != strlen(s)) {
        return 0;
    }
    int skipped = 0;
    int counter_s = 0;
    int counter_t = 0;
    while (s[counter_s]) {
        if (s[counter_s] == t[counter_t]) {
            counter_s++;
            counter_t++;
        } else {
            counter_s++;
            skipped++;
        }
        if (skipped > n) {
            return 0;
        }
    }

    if (skipped == n) {
        return 1;
    }
    return 0;
}

void print_lines(char *str) {

}


void getWord(char word[30]) {
    scanf("%s", word);
}

int getLine(char line[LINE]) {
    int i = -1;
    do {
        i++;
        scanf("%c", line + i);
//        *(line + i) = getchar();
    } while (line[i] != '\n' || line[i] != EOF);
    if (line[i] != EOF) {
        return -1;
    }
    return i + 1;
}

int main() {
    char word[WORD];
    printf("enter word and option\n");
    getWord(word);
    printf("word = %s  ", word);
    char option;
    scanf("%s", &option);
    printf("option = %c\n", option);
    int there_is_a_line;
    do {
        char line[LINE];
        printf("enter line\n");
        there_is_a_line = getLine(line);
        printf("%s\n", line);
//        if (option == 'a') {
//            if (subString()) {
//
//            }
//        } else {


//        }
    } while (there_is_a_line != -1);
    printf("The End!");
    return 0;
}
