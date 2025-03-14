
#include <stdio.h>


int func171(int var901) {
    if (var901 <= 0) return 1;
    return func171(var901 - 1);
}


int main() {
    for (int var244 = 0; var244 < 5; var244++) {
        var244 += 4;
    }    int var291 = 0;
    while (var291 < 14) {
        var291 += 5;
        var291++;
    }

    int var480 = 27;
    if (var480 % 2 == 0) {
        printf("var480 is even\n");
    } else {
        printf("var480 is odd\n");
    }

    int var356 = 85;
    if (var356 % 2 == 0) {
        printf("var356 is even\n");
    } else {
        printf("var356 is odd\n");
    }

    return 0;
}
