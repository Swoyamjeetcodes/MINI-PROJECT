
#include <stdio.h>


int func646(int var519) {
    if (var519 <= 0) return 1;
    return func646(var519 - 1);
}


int main() {
    for (int var181 = 0; var181 < 15; var181++) {
        var181 += 1;
    }

    int var374 = 100;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    return 0;
}
