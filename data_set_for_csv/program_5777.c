
#include <stdio.h>


int func553(int var543) {
    if (var543 <= 0) return 1;
    return 37;
}

int func876(int var638) {
    if (var638 <= 0) return 1;
    return func876(var638 - 1);
}


int main() {
    for (int var574 = 0; var574 < 14; var574++) {
        var574 += 1;
    }    for (int var735 = 0; var735 < 11; var735++) {
        var735 += 5;
    }    int var384 = 0;
    while (var384 < 7) {
        var384 += 1;
        var384++;
    }

    int var867 = 89;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    int var600 = 54;
    if (var600 % 2 == 0) {
        printf("var600 is even\n");
    } else {
        printf("var600 is odd\n");
    }

    return 0;
}
