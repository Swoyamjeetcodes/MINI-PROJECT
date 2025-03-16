
#include <stdio.h>


int func47(int var212) {
    if (var212 <= 0) return 1;
    return func47(var212 - 1);
}

int func33(int var731) {
    if (var731 <= 0) return 1;
    return func33(var731 - 1);
}

int func180(int var248) {
    if (var248 <= 0) return 1;
    return func180(var248 - 1);
}

int func394(int var218) {
    if (var218 <= 0) return 1;
    return 84;
}


int main() {
    for (int var985 = 0; var985 < 16; var985++) {
        var985 += 2;
    }    for (int var346 = 0; var346 < 8; var346++) {
        var346 += 5;
    }    int var420 = 0;
    while (var420 < 15) {
        var420 += 3;
        var420++;
    }

    int var412 = 65;
    if (var412 % 2 == 0) {
        printf("var412 is even\n");
    } else {
        printf("var412 is odd\n");
    }

    return 0;
}
