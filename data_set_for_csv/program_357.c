
#include <stdio.h>


int func213(int var981) {
    if (var981 <= 0) return 1;
    return 11;
}

int func579(int var311) {
    if (var311 <= 0) return 1;
    return func579(var311 - 1);
}


int main() {
    for (int var237 = 0; var237 < 20; var237++) {
        var237 += 4;
    }    int var290 = 0;
    while (var290 < 19) {
        var290 += 2;
        var290++;
    }    for (int var180 = 0; var180 < 13; var180++) {
        var180 += 4;
    }

    int var611 = 72;
    if (var611 % 2 == 0) {
        printf("var611 is even\n");
    } else {
        printf("var611 is odd\n");
    }

    int var700 = 39;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    return 0;
}
