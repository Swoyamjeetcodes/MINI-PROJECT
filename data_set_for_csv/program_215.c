
#include <stdio.h>


int func446(int var197) {
    if (var197 <= 0) return 1;
    return func446(var197 - 1);
}


int main() {
    int var637 = 0;
    while (var637 < 8) {
        var637 += 2;
        var637++;
    }

    int var306 = 95;
    if (var306 % 2 == 0) {
        printf("var306 is even\n");
    } else {
        printf("var306 is odd\n");
    }

    return 0;
}
