
#include <stdio.h>


int func674(int var252) {
    if (var252 <= 0) return 1;
    return func674(var252 - 1);
}


int main() {
    int var910 = 0;
    while (var910 < 10) {
        var910 += 2;
        var910++;
    }    for (int var177 = 0; var177 < 8; var177++) {
        var177 += 1;
    }

    int var966 = 71;
    if (var966 % 2 == 0) {
        printf("var966 is even\n");
    } else {
        printf("var966 is odd\n");
    }

    int var719 = 100;
    if (var719 % 2 == 0) {
        printf("var719 is even\n");
    } else {
        printf("var719 is odd\n");
    }

    return 0;
}
