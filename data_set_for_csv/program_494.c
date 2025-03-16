
#include <stdio.h>


int func781(int var12) {
    if (var12 <= 0) return 1;
    return 78;
}

int func243(int var847) {
    if (var847 <= 0) return 1;
    return func243(var847 - 1);
}

int func419(int var350) {
    if (var350 <= 0) return 1;
    return func419(var350 - 1);
}

int func169(int var211) {
    if (var211 <= 0) return 1;
    return func169(var211 - 1);
}


int main() {
    for (int var695 = 0; var695 < 12; var695++) {
        var695 += 2;
    }

    int var69 = 16;
    if (var69 % 2 == 0) {
        printf("var69 is even\n");
    } else {
        printf("var69 is odd\n");
    }

    return 0;
}
