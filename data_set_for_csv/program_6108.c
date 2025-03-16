
#include <stdio.h>


int func966(int var300) {
    if (var300 <= 0) return 1;
    return func966(var300 - 1);
}


int main() {
    for (int var478 = 0; var478 < 20; var478++) {
        var478 += 1;
    }    for (int var124 = 0; var124 < 11; var124++) {
        var124 += 2;
    }    for (int var827 = 0; var827 < 5; var827++) {
        var827 += 3;
    }

    int var964 = 55;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    int var851 = 49;
    if (var851 % 2 == 0) {
        printf("var851 is even\n");
    } else {
        printf("var851 is odd\n");
    }

    return 0;
}
