
#include <stdio.h>


int func980(int var431) {
    if (var431 <= 0) return 1;
    return func980(var431 - 1);
}

int func33(int var681) {
    if (var681 <= 0) return 1;
    return func33(var681 - 1);
}


int main() {
    for (int var891 = 0; var891 < 13; var891++) {
        var891 += 2;
    }    int var356 = 0;
    while (var356 < 6) {
        var356 += 3;
        var356++;
    }    int var968 = 0;
    while (var968 < 8) {
        var968 += 1;
        var968++;
    }    for (int var395 = 0; var395 < 10; var395++) {
        var395 += 1;
    }    int var496 = 0;
    while (var496 < 19) {
        var496 += 2;
        var496++;
    }

    int var469 = 86;
    if (var469 % 2 == 0) {
        printf("var469 is even\n");
    } else {
        printf("var469 is odd\n");
    }

    int var200 = 40;
    if (var200 % 2 == 0) {
        printf("var200 is even\n");
    } else {
        printf("var200 is odd\n");
    }

    return 0;
}
