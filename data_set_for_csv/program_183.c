
#include <stdio.h>


int func560(int var304) {
    if (var304 <= 0) return 1;
    return func560(var304 - 1);
}

int func99(int var679) {
    if (var679 <= 0) return 1;
    return func99(var679 - 1);
}

int func550(int var975) {
    if (var975 <= 0) return 1;
    return 29;
}


int main() {
    int var601 = 0;
    while (var601 < 14) {
        var601 += 2;
        var601++;
    }    for (int var157 = 0; var157 < 10; var157++) {
        var157 += 1;
    }    for (int var972 = 0; var972 < 20; var972++) {
        var972 += 3;
    }    int var916 = 0;
    while (var916 < 20) {
        var916 += 2;
        var916++;
    }    for (int var283 = 0; var283 < 12; var283++) {
        var283 += 1;
    }    int var847 = 0;
    while (var847 < 18) {
        var847 += 4;
        var847++;
    }

    int var574 = 5;
    if (var574 % 2 == 0) {
        printf("var574 is even\n");
    } else {
        printf("var574 is odd\n");
    }

    return 0;
}
