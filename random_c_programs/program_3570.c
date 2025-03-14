
#include <stdio.h>


int func87(int var168) {
    if (var168 <= 0) return 1;
    return func87(var168 - 1);
}

int func646(int var304) {
    if (var304 <= 0) return 1;
    return func646(var304 - 1);
}

int func879(int var704) {
    if (var704 <= 0) return 1;
    return 53;
}

int func734(int var433) {
    if (var433 <= 0) return 1;
    return 26;
}


int main() {
    for (int var810 = 0; var810 < 10; var810++) {
        var810 += 2;
    }    int var182 = 0;
    while (var182 < 16) {
        var182 += 4;
        var182++;
    }

    int var226 = 17;
    if (var226 % 2 == 0) {
        printf("var226 is even\n");
    } else {
        printf("var226 is odd\n");
    }

    return 0;
}
