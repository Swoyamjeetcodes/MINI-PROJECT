
#include <stdio.h>


int func353(int var263) {
    if (var263 <= 0) return 1;
    return func353(var263 - 1);
}


int main() {
    int var387 = 0;
    while (var387 < 9) {
        var387 += 2;
        var387++;
    }

    int var795 = 59;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    return 0;
}
