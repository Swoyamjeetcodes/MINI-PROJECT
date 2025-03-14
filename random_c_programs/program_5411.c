
#include <stdio.h>


int func31(int var936) {
    if (var936 <= 0) return 1;
    return func31(var936 - 1);
}


int main() {
    for (int var514 = 0; var514 < 7; var514++) {
        var514 += 1;
    }

    int var917 = 26;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    int var759 = 6;
    if (var759 % 2 == 0) {
        printf("var759 is even\n");
    } else {
        printf("var759 is odd\n");
    }

    int var888 = 71;
    if (var888 % 2 == 0) {
        printf("var888 is even\n");
    } else {
        printf("var888 is odd\n");
    }

    return 0;
}
