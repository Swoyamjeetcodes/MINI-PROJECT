
#include <stdio.h>


int func860(int var983) {
    if (var983 <= 0) return 1;
    return func860(var983 - 1);
}

int func454(int var847) {
    if (var847 <= 0) return 1;
    return func454(var847 - 1);
}

int func534(int var310) {
    if (var310 <= 0) return 1;
    return func534(var310 - 1);
}

int func59(int var279) {
    if (var279 <= 0) return 1;
    return func59(var279 - 1);
}

int func949(int var69) {
    if (var69 <= 0) return 1;
    return 22;
}


int main() {
    int var801 = 0;
    while (var801 < 14) {
        var801 += 4;
        var801++;
    }    for (int var695 = 0; var695 < 18; var695++) {
        var695 += 1;
    }    for (int var956 = 0; var956 < 6; var956++) {
        var956 += 2;
    }

    int var368 = 65;
    if (var368 % 2 == 0) {
        printf("var368 is even\n");
    } else {
        printf("var368 is odd\n");
    }

    int var977 = 4;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    return 0;
}
