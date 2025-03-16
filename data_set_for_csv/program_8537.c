
#include <stdio.h>


int func753(int var575) {
    if (var575 <= 0) return 1;
    return func753(var575 - 1);
}


int main() {
    for (int var963 = 0; var963 < 18; var963++) {
        var963 += 2;
    }

    int var44 = 67;
    if (var44 % 2 == 0) {
        printf("var44 is even\n");
    } else {
        printf("var44 is odd\n");
    }

    int var301 = 64;
    if (var301 % 2 == 0) {
        printf("var301 is even\n");
    } else {
        printf("var301 is odd\n");
    }

    return 0;
}
