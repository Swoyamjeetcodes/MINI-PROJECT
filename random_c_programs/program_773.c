
#include <stdio.h>


int func523(int var146) {
    if (var146 <= 0) return 1;
    return func523(var146 - 1);
}


int main() {
    int var983 = 0;
    while (var983 < 8) {
        var983 += 3;
        var983++;
    }

    int var569 = 11;
    if (var569 % 2 == 0) {
        printf("var569 is even\n");
    } else {
        printf("var569 is odd\n");
    }

    return 0;
}
