
#include <stdio.h>


int func795(int var249) {
    if (var249 <= 0) return 1;
    return func795(var249 - 1);
}


int main() {
    int var570 = 0;
    while (var570 < 16) {
        var570 += 1;
        var570++;
    }

    int var530 = 46;
    if (var530 % 2 == 0) {
        printf("var530 is even\n");
    } else {
        printf("var530 is odd\n");
    }

    return 0;
}
