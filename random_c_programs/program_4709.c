
#include <stdio.h>


int func671(int var790) {
    if (var790 <= 0) return 1;
    return func671(var790 - 1);
}

int func807(int var413) {
    if (var413 <= 0) return 1;
    return func807(var413 - 1);
}

int func456(int var163) {
    if (var163 <= 0) return 1;
    return 86;
}

int func102(int var974) {
    if (var974 <= 0) return 1;
    return 36;
}


int main() {
    for (int var893 = 0; var893 < 16; var893++) {
        var893 += 3;
    }

    int var400 = 43;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    int var517 = 19;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    int var920 = 5;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    return 0;
}
