
#include <stdio.h>


int func648(int var892) {
    if (var892 <= 0) return 1;
    return func648(var892 - 1);
}

int func208(int var406) {
    if (var406 <= 0) return 1;
    return func208(var406 - 1);
}

int func676(int var435) {
    if (var435 <= 0) return 1;
    return func676(var435 - 1);
}

int func828(int var121) {
    if (var121 <= 0) return 1;
    return func828(var121 - 1);
}


int main() {
    for (int var411 = 0; var411 < 17; var411++) {
        var411 += 5;
    }    for (int var314 = 0; var314 < 18; var314++) {
        var314 += 5;
    }    for (int var893 = 0; var893 < 11; var893++) {
        var893 += 4;
    }

    int var677 = 100;
    if (var677 % 2 == 0) {
        printf("var677 is even\n");
    } else {
        printf("var677 is odd\n");
    }

    int var362 = 90;
    if (var362 % 2 == 0) {
        printf("var362 is even\n");
    } else {
        printf("var362 is odd\n");
    }

    int var348 = 83;
    if (var348 % 2 == 0) {
        printf("var348 is even\n");
    } else {
        printf("var348 is odd\n");
    }

    return 0;
}
