
#include <stdio.h>


int func647(int var359) {
    if (var359 <= 0) return 1;
    return func647(var359 - 1);
}

int func611(int var548) {
    if (var548 <= 0) return 1;
    return func611(var548 - 1);
}

int func4(int var547) {
    if (var547 <= 0) return 1;
    return 89;
}

int func882(int var568) {
    if (var568 <= 0) return 1;
    return func882(var568 - 1);
}

int func181(int var403) {
    if (var403 <= 0) return 1;
    return func181(var403 - 1);
}


int main() {
    for (int var518 = 0; var518 < 14; var518++) {
        var518 += 3;
    }    int var480 = 0;
    while (var480 < 5) {
        var480 += 4;
        var480++;
    }

    int var355 = 79;
    if (var355 % 2 == 0) {
        printf("var355 is even\n");
    } else {
        printf("var355 is odd\n");
    }

    return 0;
}
