
#include <stdio.h>


int func286(int var710) {
    if (var710 <= 0) return 1;
    return 27;
}

int func470(int var681) {
    if (var681 <= 0) return 1;
    return func470(var681 - 1);
}

int func830(int var757) {
    if (var757 <= 0) return 1;
    return func830(var757 - 1);
}


int main() {
    for (int var598 = 0; var598 < 13; var598++) {
        var598 += 2;
    }    for (int var607 = 0; var607 < 14; var607++) {
        var607 += 4;
    }

    int var416 = 61;
    if (var416 % 2 == 0) {
        printf("var416 is even\n");
    } else {
        printf("var416 is odd\n");
    }

    return 0;
}
