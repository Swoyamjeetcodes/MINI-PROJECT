
#include <stdio.h>


int func795(int var534) {
    if (var534 <= 0) return 1;
    return func795(var534 - 1);
}


int main() {
    for (int var783 = 0; var783 < 14; var783++) {
        var783 += 1;
    }    int var411 = 0;
    while (var411 < 17) {
        var411 += 4;
        var411++;
    }    int var885 = 0;
    while (var885 < 16) {
        var885 += 1;
        var885++;
    }

    int var977 = 79;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    int var363 = 14;
    if (var363 % 2 == 0) {
        printf("var363 is even\n");
    } else {
        printf("var363 is odd\n");
    }

    return 0;
}
