
#include <stdio.h>


int func712(int var380) {
    if (var380 <= 0) return 1;
    return func712(var380 - 1);
}

int func718(int var486) {
    if (var486 <= 0) return 1;
    return func718(var486 - 1);
}

int func683(int var867) {
    if (var867 <= 0) return 1;
    return 24;
}

int func700(int var518) {
    if (var518 <= 0) return 1;
    return func700(var518 - 1);
}

int func657(int var164) {
    if (var164 <= 0) return 1;
    return func657(var164 - 1);
}


int main() {
    int var73 = 0;
    while (var73 < 20) {
        var73 += 3;
        var73++;
    }    int var987 = 0;
    while (var987 < 16) {
        var987 += 2;
        var987++;
    }

    int var886 = 87;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    return 0;
}
