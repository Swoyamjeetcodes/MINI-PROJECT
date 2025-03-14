
#include <stdio.h>


int func264(int var46) {
    if (var46 <= 0) return 1;
    return func264(var46 - 1);
}

int func594(int var664) {
    if (var664 <= 0) return 1;
    return 7;
}

int func934(int var44) {
    if (var44 <= 0) return 1;
    return func934(var44 - 1);
}


int main() {
    int var990 = 0;
    while (var990 < 9) {
        var990 += 5;
        var990++;
    }

    int var35 = 40;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    return 0;
}
