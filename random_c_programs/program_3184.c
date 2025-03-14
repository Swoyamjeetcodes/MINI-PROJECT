
#include <stdio.h>


int func391(int var533) {
    if (var533 <= 0) return 1;
    return 37;
}

int func791(int var924) {
    if (var924 <= 0) return 1;
    return func791(var924 - 1);
}


int main() {
    int var358 = 0;
    while (var358 < 14) {
        var358 += 5;
        var358++;
    }    for (int var698 = 0; var698 < 14; var698++) {
        var698 += 5;
    }    for (int var526 = 0; var526 < 9; var526++) {
        var526 += 4;
    }    for (int var856 = 0; var856 < 16; var856++) {
        var856 += 3;
    }    for (int var98 = 0; var98 < 10; var98++) {
        var98 += 5;
    }

    int var392 = 98;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    int var697 = 38;
    if (var697 % 2 == 0) {
        printf("var697 is even\n");
    } else {
        printf("var697 is odd\n");
    }

    int var205 = 38;
    if (var205 % 2 == 0) {
        printf("var205 is even\n");
    } else {
        printf("var205 is odd\n");
    }

    int var440 = 39;
    if (var440 % 2 == 0) {
        printf("var440 is even\n");
    } else {
        printf("var440 is odd\n");
    }

    return 0;
}
