
#include <stdio.h>


int func81(int var14) {
    if (var14 <= 0) return 1;
    return func81(var14 - 1);
}

int func502(int var300) {
    if (var300 <= 0) return 1;
    return 62;
}

int func486(int var211) {
    if (var211 <= 0) return 1;
    return 68;
}


int main() {
    for (int var192 = 0; var192 < 13; var192++) {
        var192 += 5;
    }    int var225 = 0;
    while (var225 < 12) {
        var225 += 5;
        var225++;
    }

    int var63 = 36;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    return 0;
}
