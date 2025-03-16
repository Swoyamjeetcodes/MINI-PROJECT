
#include <stdio.h>


int func420(int var271) {
    if (var271 <= 0) return 1;
    return func420(var271 - 1);
}


int main() {
    int var220 = 0;
    while (var220 < 7) {
        var220 += 2;
        var220++;
    }    for (int var900 = 0; var900 < 17; var900++) {
        var900 += 5;
    }

    int var91 = 59;
    if (var91 % 2 == 0) {
        printf("var91 is even\n");
    } else {
        printf("var91 is odd\n");
    }

    int var317 = 26;
    if (var317 % 2 == 0) {
        printf("var317 is even\n");
    } else {
        printf("var317 is odd\n");
    }

    int var586 = 53;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    return 0;
}
