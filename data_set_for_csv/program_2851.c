
#include <stdio.h>


int func657(int var936) {
    if (var936 <= 0) return 1;
    return func657(var936 - 1);
}


int main() {
    for (int var692 = 0; var692 < 19; var692++) {
        var692 += 1;
    }

    int var76 = 99;
    if (var76 % 2 == 0) {
        printf("var76 is even\n");
    } else {
        printf("var76 is odd\n");
    }

    int var576 = 11;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    return 0;
}
