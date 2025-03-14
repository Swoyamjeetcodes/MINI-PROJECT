
#include <stdio.h>


int func838(int var434) {
    if (var434 <= 0) return 1;
    return func838(var434 - 1);
}


int main() {
    int var530 = 0;
    while (var530 < 18) {
        var530 += 1;
        var530++;
    }

    int var88 = 65;
    if (var88 % 2 == 0) {
        printf("var88 is even\n");
    } else {
        printf("var88 is odd\n");
    }

    return 0;
}
