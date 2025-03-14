
#include <stdio.h>


int func738(int var191) {
    if (var191 <= 0) return 1;
    return 100;
}

int func199(int var591) {
    if (var591 <= 0) return 1;
    return 99;
}

int func441(int var483) {
    if (var483 <= 0) return 1;
    return func441(var483 - 1);
}

int func467(int var843) {
    if (var843 <= 0) return 1;
    return 54;
}

int func924(int var63) {
    if (var63 <= 0) return 1;
    return 78;
}


int main() {
    for (int var517 = 0; var517 < 17; var517++) {
        var517 += 5;
    }    int var901 = 0;
    while (var901 < 11) {
        var901 += 4;
        var901++;
    }

    int var990 = 77;
    if (var990 % 2 == 0) {
        printf("var990 is even\n");
    } else {
        printf("var990 is odd\n");
    }

    int var976 = 49;
    if (var976 % 2 == 0) {
        printf("var976 is even\n");
    } else {
        printf("var976 is odd\n");
    }

    return 0;
}
