
#include <stdio.h>


int func282(int var932) {
    if (var932 <= 0) return 1;
    return 59;
}

int func886(int var406) {
    if (var406 <= 0) return 1;
    return func886(var406 - 1);
}


int main() {
    int var32 = 0;
    while (var32 < 20) {
        var32 += 5;
        var32++;
    }

    int var323 = 78;
    if (var323 % 2 == 0) {
        printf("var323 is even\n");
    } else {
        printf("var323 is odd\n");
    }

    int var64 = 83;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    return 0;
}
