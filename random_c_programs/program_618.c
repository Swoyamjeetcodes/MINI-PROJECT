
#include <stdio.h>


int func550(int var972) {
    if (var972 <= 0) return 1;
    return func550(var972 - 1);
}

int func137(int var710) {
    if (var710 <= 0) return 1;
    return 21;
}

int func934(int var847) {
    if (var847 <= 0) return 1;
    return 4;
}


int main() {
    int var94 = 0;
    while (var94 < 12) {
        var94 += 3;
        var94++;
    }    int var495 = 0;
    while (var495 < 16) {
        var495 += 3;
        var495++;
    }    int var974 = 0;
    while (var974 < 12) {
        var974 += 3;
        var974++;
    }    int var870 = 0;
    while (var870 < 12) {
        var870 += 4;
        var870++;
    }    int var889 = 0;
    while (var889 < 8) {
        var889 += 3;
        var889++;
    }

    int var627 = 25;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    int var511 = 25;
    if (var511 % 2 == 0) {
        printf("var511 is even\n");
    } else {
        printf("var511 is odd\n");
    }

    int var487 = 100;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    return 0;
}
