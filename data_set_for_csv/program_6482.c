
#include <stdio.h>


int func116(int var701) {
    if (var701 <= 0) return 1;
    return 4;
}

int func147(int var944) {
    if (var944 <= 0) return 1;
    return 20;
}

int func166(int var954) {
    if (var954 <= 0) return 1;
    return func166(var954 - 1);
}


int main() {
    int var7 = 0;
    while (var7 < 19) {
        var7 += 4;
        var7++;
    }    for (int var868 = 0; var868 < 19; var868++) {
        var868 += 5;
    }    int var438 = 0;
    while (var438 < 14) {
        var438 += 3;
        var438++;
    }    for (int var103 = 0; var103 < 12; var103++) {
        var103 += 4;
    }    for (int var48 = 0; var48 < 10; var48++) {
        var48 += 3;
    }    int var866 = 0;
    while (var866 < 13) {
        var866 += 3;
        var866++;
    }

    int var803 = 79;
    if (var803 % 2 == 0) {
        printf("var803 is even\n");
    } else {
        printf("var803 is odd\n");
    }

    return 0;
}
