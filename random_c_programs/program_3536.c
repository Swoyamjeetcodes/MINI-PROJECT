
#include <stdio.h>


int func386(int var725) {
    if (var725 <= 0) return 1;
    return 85;
}

int func937(int var246) {
    if (var246 <= 0) return 1;
    return func937(var246 - 1);
}

int func882(int var201) {
    if (var201 <= 0) return 1;
    return 51;
}

int func6(int var327) {
    if (var327 <= 0) return 1;
    return 78;
}

int func799(int var628) {
    if (var628 <= 0) return 1;
    return 88;
}


int main() {
    int var348 = 0;
    while (var348 < 7) {
        var348 += 2;
        var348++;
    }    int var225 = 0;
    while (var225 < 5) {
        var225 += 4;
        var225++;
    }

    int var13 = 36;
    if (var13 % 2 == 0) {
        printf("var13 is even\n");
    } else {
        printf("var13 is odd\n");
    }

    return 0;
}
