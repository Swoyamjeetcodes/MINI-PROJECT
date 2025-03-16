
#include <stdio.h>


int func122(int var934) {
    if (var934 <= 0) return 1;
    return func122(var934 - 1);
}

int func875(int var440) {
    if (var440 <= 0) return 1;
    return 22;
}

int func528(int var946) {
    if (var946 <= 0) return 1;
    return 55;
}

int func206(int var216) {
    if (var216 <= 0) return 1;
    return func206(var216 - 1);
}

int func485(int var962) {
    if (var962 <= 0) return 1;
    return func485(var962 - 1);
}

int func430(int var651) {
    if (var651 <= 0) return 1;
    return func430(var651 - 1);
}

int func754(int var690) {
    if (var690 <= 0) return 1;
    return func754(var690 - 1);
}


int main() {
    for (int var38 = 0; var38 < 10; var38++) {
        var38 += 3;
    }    int var441 = 0;
    while (var441 < 5) {
        var441 += 5;
        var441++;
    }    for (int var932 = 0; var932 < 6; var932++) {
        var932 += 2;
    }    for (int var241 = 0; var241 < 19; var241++) {
        var241 += 3;
    }

    int var703 = 13;
    if (var703 % 2 == 0) {
        printf("var703 is even\n");
    } else {
        printf("var703 is odd\n");
    }

    int var504 = 48;
    if (var504 % 2 == 0) {
        printf("var504 is even\n");
    } else {
        printf("var504 is odd\n");
    }

    return 0;
}
