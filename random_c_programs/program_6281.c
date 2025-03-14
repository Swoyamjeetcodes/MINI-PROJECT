
#include <stdio.h>


int func766(int var975) {
    if (var975 <= 0) return 1;
    return func766(var975 - 1);
}


int main() {
    for (int var240 = 0; var240 < 13; var240++) {
        var240 += 2;
    }

    int var696 = 95;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    return 0;
}
