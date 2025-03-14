
#include <stdio.h>


int func523(int var13) {
    if (var13 <= 0) return 1;
    return func523(var13 - 1);
}


int main() {
    for (int var622 = 0; var622 < 9; var622++) {
        var622 += 1;
    }    int var192 = 0;
    while (var192 < 13) {
        var192 += 5;
        var192++;
    }

    int var837 = 5;
    if (var837 % 2 == 0) {
        printf("var837 is even\n");
    } else {
        printf("var837 is odd\n");
    }

    int var595 = 41;
    if (var595 % 2 == 0) {
        printf("var595 is even\n");
    } else {
        printf("var595 is odd\n");
    }

    return 0;
}
