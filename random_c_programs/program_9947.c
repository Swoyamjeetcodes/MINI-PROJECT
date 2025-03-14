
#include <stdio.h>


int func466(int var583) {
    if (var583 <= 0) return 1;
    return 41;
}

int func507(int var547) {
    if (var547 <= 0) return 1;
    return func507(var547 - 1);
}

int func66(int var13) {
    if (var13 <= 0) return 1;
    return func66(var13 - 1);
}

int func331(int var320) {
    if (var320 <= 0) return 1;
    return func331(var320 - 1);
}


int main() {
    for (int var238 = 0; var238 < 11; var238++) {
        var238 += 3;
    }    int var149 = 0;
    while (var149 < 12) {
        var149 += 4;
        var149++;
    }    int var279 = 0;
    while (var279 < 15) {
        var279 += 3;
        var279++;
    }

    int var553 = 4;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    int var856 = 21;
    if (var856 % 2 == 0) {
        printf("var856 is even\n");
    } else {
        printf("var856 is odd\n");
    }

    int var138 = 39;
    if (var138 % 2 == 0) {
        printf("var138 is even\n");
    } else {
        printf("var138 is odd\n");
    }

    return 0;
}
