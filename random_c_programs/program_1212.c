
#include <stdio.h>


int func929(int var560) {
    if (var560 <= 0) return 1;
    return func929(var560 - 1);
}

int func817(int var891) {
    if (var891 <= 0) return 1;
    return 62;
}

int func742(int var156) {
    if (var156 <= 0) return 1;
    return 98;
}


int main() {
    int var80 = 0;
    while (var80 < 19) {
        var80 += 3;
        var80++;
    }    int var60 = 0;
    while (var60 < 5) {
        var60 += 2;
        var60++;
    }    for (int var707 = 0; var707 < 15; var707++) {
        var707 += 5;
    }

    int var500 = 38;
    if (var500 % 2 == 0) {
        printf("var500 is even\n");
    } else {
        printf("var500 is odd\n");
    }

    return 0;
}
