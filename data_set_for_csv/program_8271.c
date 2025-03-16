
#include <stdio.h>


int func639(int var1) {
    if (var1 <= 0) return 1;
    return 1;
}

int func618(int var416) {
    if (var416 <= 0) return 1;
    return func618(var416 - 1);
}

int func273(int var728) {
    if (var728 <= 0) return 1;
    return func273(var728 - 1);
}

int func872(int var54) {
    if (var54 <= 0) return 1;
    return func872(var54 - 1);
}


int main() {
    for (int var908 = 0; var908 < 17; var908++) {
        var908 += 1;
    }    for (int var49 = 0; var49 < 16; var49++) {
        var49 += 2;
    }    for (int var98 = 0; var98 < 9; var98++) {
        var98 += 4;
    }

    int var254 = 32;
    if (var254 % 2 == 0) {
        printf("var254 is even\n");
    } else {
        printf("var254 is odd\n");
    }

    int var831 = 96;
    if (var831 % 2 == 0) {
        printf("var831 is even\n");
    } else {
        printf("var831 is odd\n");
    }

    int var188 = 80;
    if (var188 % 2 == 0) {
        printf("var188 is even\n");
    } else {
        printf("var188 is odd\n");
    }

    return 0;
}
