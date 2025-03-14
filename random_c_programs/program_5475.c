
#include <stdio.h>


int func520(int var992) {
    if (var992 <= 0) return 1;
    return func520(var992 - 1);
}

int func974(int var452) {
    if (var452 <= 0) return 1;
    return func974(var452 - 1);
}


int main() {
    for (int var630 = 0; var630 < 14; var630++) {
        var630 += 1;
    }    int var914 = 0;
    while (var914 < 11) {
        var914 += 1;
        var914++;
    }

    int var179 = 11;
    if (var179 % 2 == 0) {
        printf("var179 is even\n");
    } else {
        printf("var179 is odd\n");
    }

    int var656 = 60;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    return 0;
}
