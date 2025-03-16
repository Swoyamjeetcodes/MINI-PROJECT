
#include <stdio.h>


int func508(int var572) {
    if (var572 <= 0) return 1;
    return 33;
}

int func49(int var46) {
    if (var46 <= 0) return 1;
    return func49(var46 - 1);
}

int func902(int var236) {
    if (var236 <= 0) return 1;
    return func902(var236 - 1);
}


int main() {
    for (int var9 = 0; var9 < 5; var9++) {
        var9 += 2;
    }    int var771 = 0;
    while (var771 < 9) {
        var771 += 3;
        var771++;
    }    for (int var401 = 0; var401 < 14; var401++) {
        var401 += 5;
    }    for (int var947 = 0; var947 < 6; var947++) {
        var947 += 5;
    }    int var768 = 0;
    while (var768 < 11) {
        var768 += 3;
        var768++;
    }    int var473 = 0;
    while (var473 < 12) {
        var473 += 2;
        var473++;
    }    int var5 = 0;
    while (var5 < 20) {
        var5 += 4;
        var5++;
    }

    int var813 = 26;
    if (var813 % 2 == 0) {
        printf("var813 is even\n");
    } else {
        printf("var813 is odd\n");
    }

    return 0;
}
