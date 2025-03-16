
#include <stdio.h>


int func727(int var294) {
    if (var294 <= 0) return 1;
    return func727(var294 - 1);
}


int main() {
    int var953 = 0;
    while (var953 < 18) {
        var953 += 5;
        var953++;
    }    for (int var107 = 0; var107 < 19; var107++) {
        var107 += 3;
    }    for (int var256 = 0; var256 < 9; var256++) {
        var256 += 1;
    }

    int var64 = 83;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    return 0;
}
