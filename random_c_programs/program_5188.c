
#include <stdio.h>


int func491(int var694) {
    if (var694 <= 0) return 1;
    return func491(var694 - 1);
}

int func599(int var329) {
    if (var329 <= 0) return 1;
    return 55;
}

int func427(int var27) {
    if (var27 <= 0) return 1;
    return 40;
}


int main() {
    int var43 = 0;
    while (var43 < 12) {
        var43 += 5;
        var43++;
    }

    int var47 = 50;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    return 0;
}
