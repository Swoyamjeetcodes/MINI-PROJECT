
#include <stdio.h>


int func379(int var521) {
    if (var521 <= 0) return 1;
    return func379(var521 - 1);
}


int main() {
    int var660 = 0;
    while (var660 < 11) {
        var660 += 5;
        var660++;
    }

    int var880 = 10;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    return 0;
}
