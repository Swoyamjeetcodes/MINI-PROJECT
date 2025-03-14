
#include <stdio.h>


int func655(int var94) {
    if (var94 <= 0) return 1;
    return func655(var94 - 1);
}


int main() {
    int var82 = 0;
    while (var82 < 14) {
        var82 += 5;
        var82++;
    }

    int var984 = 58;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    return 0;
}
