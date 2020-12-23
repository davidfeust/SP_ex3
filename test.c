#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isLastWord(char w[]) {
    for (int i = 0; w ; ++i) {
        if (w[i++] == '\n') {
            return 1;
        }


    }
    return 0;
}

void main() {
    char tito[100];

    printf("%s", tito);















//    size_t malloc_size = 30;
//    char *line[100];
////    int i = -1;
//    for (int i = 0; i < 5; i++) {
////    do {
////        i++;
//        line[i] = malloc(malloc_size * sizeof(char)); /* allocates 100 bytes */
//        printf("Enter line: ");
//        scanf("%99s", line[i]); /* Use %99s to avoid overflow */
////    } while (line[i]);
//    }
//    for (int j = 0; j < 5; ++j) {
//        printf("%s ", line[j]);
//    }
////
//
//    char line[1024];
//    char *tito= fgets(line,250, stdin);
////    char tito[80];
//    scanf("%s", tito);
//    printf("tito = %s", tito);
//    int r = isLastWord(tito);
//    printf("r = %d", r);
}

