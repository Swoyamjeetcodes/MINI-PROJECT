
#include <stdio.h>


int func616(int var131) {
    if (var131 <= 0) return 1;
    return func616(var131 - 1);
}

int func115(int var69) {
    if (var69 <= 0) return 1;
    return func115(var69 - 1);
}


int main() {
    int var269 = 0;
    while (var269 < 7) {
        var269 += 5;
        var269++;
    }    int var21 = 0;
    while (var21 < 17) {
        var21 += 2;
        var21++;
    }

    int var878 = 59;
    if (var878 % 2 == 0) {
        printf("var878 is even\n");
    } else {
        printf("var878 is odd\n");
    }

    return 0;
}
