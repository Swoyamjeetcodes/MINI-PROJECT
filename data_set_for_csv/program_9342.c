
#include <stdio.h>


int func352(int var146) {
    if (var146 <= 0) return 1;
    return func352(var146 - 1);
}

int func725(int var560) {
    if (var560 <= 0) return 1;
    return func725(var560 - 1);
}


int main() {
    int var893 = 0;
    while (var893 < 16) {
        var893 += 3;
        var893++;
    }

    int var910 = 45;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    int var466 = 98;
    if (var466 % 2 == 0) {
        printf("var466 is even\n");
    } else {
        printf("var466 is odd\n");
    }

    return 0;
}
