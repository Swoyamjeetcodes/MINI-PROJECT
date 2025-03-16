
#include <stdio.h>


int func401(int var73) {
    if (var73 <= 0) return 1;
    return func401(var73 - 1);
}


int main() {
    int var784 = 0;
    while (var784 < 9) {
        var784 += 5;
        var784++;
    }

    int var474 = 37;
    if (var474 % 2 == 0) {
        printf("var474 is even\n");
    } else {
        printf("var474 is odd\n");
    }

    return 0;
}
