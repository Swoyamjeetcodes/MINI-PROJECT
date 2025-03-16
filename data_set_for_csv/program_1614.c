
#include <stdio.h>


int func698(int var623) {
    if (var623 <= 0) return 1;
    return func698(var623 - 1);
}

int func890(int var952) {
    if (var952 <= 0) return 1;
    return func890(var952 - 1);
}

int func228(int var177) {
    if (var177 <= 0) return 1;
    return 57;
}


int main() {
    int var53 = 0;
    while (var53 < 7) {
        var53 += 3;
        var53++;
    }    int var614 = 0;
    while (var614 < 15) {
        var614 += 5;
        var614++;
    }    for (int var438 = 0; var438 < 8; var438++) {
        var438 += 4;
    }

    int var409 = 64;
    if (var409 % 2 == 0) {
        printf("var409 is even\n");
    } else {
        printf("var409 is odd\n");
    }

    int var322 = 81;
    if (var322 % 2 == 0) {
        printf("var322 is even\n");
    } else {
        printf("var322 is odd\n");
    }

    return 0;
}
