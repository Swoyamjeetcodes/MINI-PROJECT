
#include <stdio.h>


int func672(int var796) {
    if (var796 <= 0) return 1;
    return func672(var796 - 1);
}


int main() {
    for (int var349 = 0; var349 < 12; var349++) {
        var349 += 4;
    }    for (int var479 = 0; var479 < 12; var479++) {
        var479 += 1;
    }    int var721 = 0;
    while (var721 < 8) {
        var721 += 2;
        var721++;
    }

    int var869 = 2;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    int var127 = 85;
    if (var127 % 2 == 0) {
        printf("var127 is even\n");
    } else {
        printf("var127 is odd\n");
    }

    return 0;
}
