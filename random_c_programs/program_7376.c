
#include <stdio.h>


int func769(int var262) {
    if (var262 <= 0) return 1;
    return func769(var262 - 1);
}


int main() {
    for (int var931 = 0; var931 < 5; var931++) {
        var931 += 1;
    }

    int var367 = 40;
    if (var367 % 2 == 0) {
        printf("var367 is even\n");
    } else {
        printf("var367 is odd\n");
    }

    return 0;
}
