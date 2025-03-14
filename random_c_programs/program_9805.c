
#include <stdio.h>


int func847(int var417) {
    if (var417 <= 0) return 1;
    return func847(var417 - 1);
}


int main() {
    for (int var140 = 0; var140 < 15; var140++) {
        var140 += 2;
    }    for (int var282 = 0; var282 < 16; var282++) {
        var282 += 5;
    }    int var462 = 0;
    while (var462 < 12) {
        var462 += 2;
        var462++;
    }    for (int var665 = 0; var665 < 13; var665++) {
        var665 += 3;
    }    int var564 = 0;
    while (var564 < 16) {
        var564 += 2;
        var564++;
    }

    int var716 = 33;
    if (var716 % 2 == 0) {
        printf("var716 is even\n");
    } else {
        printf("var716 is odd\n");
    }

    int var464 = 85;
    if (var464 % 2 == 0) {
        printf("var464 is even\n");
    } else {
        printf("var464 is odd\n");
    }

    int var461 = 71;
    if (var461 % 2 == 0) {
        printf("var461 is even\n");
    } else {
        printf("var461 is odd\n");
    }

    return 0;
}
