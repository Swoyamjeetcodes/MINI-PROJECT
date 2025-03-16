
#include <stdio.h>


int func492(int var702) {
    if (var702 <= 0) return 1;
    return func492(var702 - 1);
}


int main() {
    for (int var44 = 0; var44 < 18; var44++) {
        var44 += 5;
    }    int var9 = 0;
    while (var9 < 6) {
        var9 += 3;
        var9++;
    }

    int var910 = 8;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    int var245 = 33;
    if (var245 % 2 == 0) {
        printf("var245 is even\n");
    } else {
        printf("var245 is odd\n");
    }

    int var57 = 35;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    return 0;
}
