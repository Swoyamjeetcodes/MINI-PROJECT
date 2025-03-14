
#include <stdio.h>


int func536(int var375) {
    if (var375 <= 0) return 1;
    return func536(var375 - 1);
}


int main() {
    int var102 = 0;
    while (var102 < 9) {
        var102 += 2;
        var102++;
    }

    int var348 = 14;
    if (var348 % 2 == 0) {
        printf("var348 is even\n");
    } else {
        printf("var348 is odd\n");
    }

    return 0;
}
