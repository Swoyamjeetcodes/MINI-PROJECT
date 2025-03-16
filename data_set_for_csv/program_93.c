
#include <stdio.h>


int func641(int var479) {
    if (var479 <= 0) return 1;
    return func641(var479 - 1);
}


int main() {
    int var751 = 0;
    while (var751 < 9) {
        var751 += 1;
        var751++;
    }

    int var31 = 7;
    if (var31 % 2 == 0) {
        printf("var31 is even\n");
    } else {
        printf("var31 is odd\n");
    }

    return 0;
}
