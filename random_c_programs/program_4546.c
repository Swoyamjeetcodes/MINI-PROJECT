
#include <stdio.h>


int func887(int var244) {
    if (var244 <= 0) return 1;
    return func887(var244 - 1);
}


int main() {
    int var456 = 0;
    while (var456 < 19) {
        var456 += 5;
        var456++;
    }    int var769 = 0;
    while (var769 < 11) {
        var769 += 4;
        var769++;
    }

    int var819 = 44;
    if (var819 % 2 == 0) {
        printf("var819 is even\n");
    } else {
        printf("var819 is odd\n");
    }

    int var789 = 31;
    if (var789 % 2 == 0) {
        printf("var789 is even\n");
    } else {
        printf("var789 is odd\n");
    }

    return 0;
}
