
#include <stdio.h>


int func118(int var647) {
    if (var647 <= 0) return 1;
    return func118(var647 - 1);
}

int func214(int var768) {
    if (var768 <= 0) return 1;
    return func214(var768 - 1);
}

int func515(int var39) {
    if (var39 <= 0) return 1;
    return func515(var39 - 1);
}

int func708(int var19) {
    if (var19 <= 0) return 1;
    return func708(var19 - 1);
}

int func591(int var900) {
    if (var900 <= 0) return 1;
    return 38;
}


int main() {
    int var519 = 0;
    while (var519 < 5) {
        var519 += 1;
        var519++;
    }    int var391 = 0;
    while (var391 < 19) {
        var391 += 5;
        var391++;
    }    int var543 = 0;
    while (var543 < 18) {
        var543 += 1;
        var543++;
    }

    int var861 = 27;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    return 0;
}
