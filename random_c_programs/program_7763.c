
#include <stdio.h>


int func3(int var197) {
    if (var197 <= 0) return 1;
    return func3(var197 - 1);
}


int main() {
    for (int var52 = 0; var52 < 8; var52++) {
        var52 += 1;
    }    for (int var405 = 0; var405 < 10; var405++) {
        var405 += 1;
    }    int var251 = 0;
    while (var251 < 10) {
        var251 += 3;
        var251++;
    }

    int var842 = 22;
    if (var842 % 2 == 0) {
        printf("var842 is even\n");
    } else {
        printf("var842 is odd\n");
    }

    return 0;
}
