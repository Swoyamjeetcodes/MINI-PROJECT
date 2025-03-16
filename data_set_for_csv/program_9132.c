
#include <stdio.h>


int func70(int var210) {
    if (var210 <= 0) return 1;
    return func70(var210 - 1);
}


int main() {
    int var793 = 0;
    while (var793 < 15) {
        var793 += 2;
        var793++;
    }

    int var29 = 70;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    int var10 = 58;
    if (var10 % 2 == 0) {
        printf("var10 is even\n");
    } else {
        printf("var10 is odd\n");
    }

    return 0;
}
