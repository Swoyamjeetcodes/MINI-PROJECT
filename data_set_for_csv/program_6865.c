
#include <stdio.h>


int func258(int var37) {
    if (var37 <= 0) return 1;
    return func258(var37 - 1);
}


int main() {
    int var575 = 0;
    while (var575 < 15) {
        var575 += 3;
        var575++;
    }    int var337 = 0;
    while (var337 < 20) {
        var337 += 2;
        var337++;
    }

    int var146 = 33;
    if (var146 % 2 == 0) {
        printf("var146 is even\n");
    } else {
        printf("var146 is odd\n");
    }

    return 0;
}
