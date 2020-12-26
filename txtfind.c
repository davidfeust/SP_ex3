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
    int skipped = 0;
    int counter_s = 0;
    int counter_t = 0;
    while (s[counter_s] || t[counter_t]) {
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
    if (skipped <= n) {
        return 1;
    }
    return 0;
}

int getWord(char word[30]) {
    memset(word, '\0', WORD);
    scanf("%s", word);
    if (feof(stdin)) {
        return -1;
    }
    if (word[strlen(word)] == '\n') {
        word[strlen(word)] = '\0';
        return 0;
    }
    return 1;
}

int getLine(char line[LINE]) {
    memset(line, '\0', LINE);
    int i = 0;
    char c;
    while (1) {
        scanf("%c", &c);
        if (feof(stdin)) {
            return -1;
        }
        line[i] = c;
        i++;
        if (c == '\n') {
            return i;
        }
    }
}

int main() {
    char word[WORD];
    getWord(word);
    char option;
    scanf("%s", &option);
    int there_is_a_line;
    do {
        if (option == 'a') {
            char line[LINE];
            there_is_a_line = getLine(line);
            if (subString(line, word)) {
                printf("%s", line);
            }
        } else {
            char word2[WORD];
            there_is_a_line = getWord(word2);
            if (similar(word2, word, 1)) {
                printf("%s\n", word2);
            }

        }
    } while (there_is_a_line != -1);

    return 0;
}
