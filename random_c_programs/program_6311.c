
#include <stdio.h>


int func256(int var769) {
    if (var769 <= 0) return 1;
    return func256(var769 - 1);
}

int func903(int var940) {
    if (var940 <= 0) return 1;
    return 77;
}


int main() {
    for (int var698 = 0; var698 < 11; var698++) {
        var698 += 5;
    }    for (int var238 = 0; var238 < 17; var238++) {
        var238 += 3;
    }    int var903 = 0;
    while (var903 < 6) {
        var903 += 4;
        var903++;
    }    for (int var727 = 0; var727 < 9; var727++) {
        var727 += 4;
    }    for (int var241 = 0; var241 < 20; var241++) {
        var241 += 5;
    }    for (int var935 = 0; var935 < 5; var935++) {
        var935 += 3;
    }    int var599 = 0;
    while (var599 < 17) {
        var599 += 4;
        var599++;
    }

    int var879 = 12;
    if (var879 % 2 == 0) {
        printf("var879 is even\n");
    } else {
        printf("var879 is odd\n");
    }

    int var808 = 1;
    if (var808 % 2 == 0) {
        printf("var808 is even\n");
    } else {
        printf("var808 is odd\n");
    }

    return 0;
}
