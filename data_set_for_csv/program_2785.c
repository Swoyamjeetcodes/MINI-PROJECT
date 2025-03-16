
#include <stdio.h>


int func844(int var427) {
    if (var427 <= 0) return 1;
    return 66;
}

int func219(int var10) {
    if (var10 <= 0) return 1;
    return func219(var10 - 1);
}

int func781(int var388) {
    if (var388 <= 0) return 1;
    return func781(var388 - 1);
}


int main() {
    for (int var88 = 0; var88 < 11; var88++) {
        var88 += 4;
    }    for (int var919 = 0; var919 < 18; var919++) {
        var919 += 5;
    }

    int var76 = 42;
    if (var76 % 2 == 0) {
        printf("var76 is even\n");
    } else {
        printf("var76 is odd\n");
    }

    return 0;
}
