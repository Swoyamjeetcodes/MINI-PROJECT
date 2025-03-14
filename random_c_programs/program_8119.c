
#include <stdio.h>


int func959(int var609) {
    if (var609 <= 0) return 1;
    return func959(var609 - 1);
}

int func494(int var763) {
    if (var763 <= 0) return 1;
    return func494(var763 - 1);
}


int main() {
    int var142 = 0;
    while (var142 < 15) {
        var142 += 2;
        var142++;
    }    int var405 = 0;
    while (var405 < 14) {
        var405 += 1;
        var405++;
    }

    int var700 = 29;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    int var404 = 16;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    return 0;
}
