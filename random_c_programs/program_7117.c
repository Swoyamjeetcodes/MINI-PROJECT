
#include <stdio.h>


int func161(int var813) {
    if (var813 <= 0) return 1;
    return func161(var813 - 1);
}


int main() {
    for (int var719 = 0; var719 < 6; var719++) {
        var719 += 1;
    }    for (int var708 = 0; var708 < 15; var708++) {
        var708 += 4;
    }    int var83 = 0;
    while (var83 < 18) {
        var83 += 3;
        var83++;
    }    for (int var77 = 0; var77 < 11; var77++) {
        var77 += 5;
    }    int var977 = 0;
    while (var977 < 20) {
        var977 += 1;
        var977++;
    }

    int var684 = 38;
    if (var684 % 2 == 0) {
        printf("var684 is even\n");
    } else {
        printf("var684 is odd\n");
    }

    int var450 = 0;
    if (var450 % 2 == 0) {
        printf("var450 is even\n");
    } else {
        printf("var450 is odd\n");
    }

    int var260 = 47;
    if (var260 % 2 == 0) {
        printf("var260 is even\n");
    } else {
        printf("var260 is odd\n");
    }

    return 0;
}
