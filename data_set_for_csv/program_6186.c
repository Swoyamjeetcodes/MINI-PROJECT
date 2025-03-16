
#include <stdio.h>


int func162(int var15) {
    if (var15 <= 0) return 1;
    return func162(var15 - 1);
}


int main() {
    int var824 = 0;
    while (var824 < 12) {
        var824 += 3;
        var824++;
    }    int var328 = 0;
    while (var328 < 12) {
        var328 += 2;
        var328++;
    }    for (int var81 = 0; var81 < 6; var81++) {
        var81 += 5;
    }

    int var232 = 16;
    if (var232 % 2 == 0) {
        printf("var232 is even\n");
    } else {
        printf("var232 is odd\n");
    }

    int var22 = 68;
    if (var22 % 2 == 0) {
        printf("var22 is even\n");
    } else {
        printf("var22 is odd\n");
    }

    return 0;
}
