
#include <stdio.h>


int func924(int var349) {
    if (var349 <= 0) return 1;
    return 70;
}

int func859(int var825) {
    if (var825 <= 0) return 1;
    return func859(var825 - 1);
}

int func913(int var831) {
    if (var831 <= 0) return 1;
    return 92;
}


int main() {
    for (int var191 = 0; var191 < 8; var191++) {
        var191 += 4;
    }    for (int var381 = 0; var381 < 14; var381++) {
        var381 += 4;
    }    int var398 = 0;
    while (var398 < 7) {
        var398 += 3;
        var398++;
    }    int var115 = 0;
    while (var115 < 9) {
        var115 += 5;
        var115++;
    }

    int var32 = 62;
    if (var32 % 2 == 0) {
        printf("var32 is even\n");
    } else {
        printf("var32 is odd\n");
    }

    int var25 = 23;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    int var749 = 45;
    if (var749 % 2 == 0) {
        printf("var749 is even\n");
    } else {
        printf("var749 is odd\n");
    }

    int var416 = 78;
    if (var416 % 2 == 0) {
        printf("var416 is even\n");
    } else {
        printf("var416 is odd\n");
    }

    return 0;
}
