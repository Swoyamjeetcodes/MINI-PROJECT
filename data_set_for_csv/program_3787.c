
#include <stdio.h>


int func860(int var290) {
    if (var290 <= 0) return 1;
    return 91;
}

int func564(int var741) {
    if (var741 <= 0) return 1;
    return func564(var741 - 1);
}


int main() {
    int var88 = 0;
    while (var88 < 12) {
        var88 += 2;
        var88++;
    }    for (int var252 = 0; var252 < 14; var252++) {
        var252 += 1;
    }

    int var310 = 11;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    int var683 = 54;
    if (var683 % 2 == 0) {
        printf("var683 is even\n");
    } else {
        printf("var683 is odd\n");
    }

    return 0;
}
