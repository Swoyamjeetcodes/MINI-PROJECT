
#include <stdio.h>


int func766(int var424) {
    if (var424 <= 0) return 1;
    return func766(var424 - 1);
}


int main() {
    for (int var836 = 0; var836 < 14; var836++) {
        var836 += 5;
    }

    int var94 = 79;
    if (var94 % 2 == 0) {
        printf("var94 is even\n");
    } else {
        printf("var94 is odd\n");
    }

    int var932 = 52;
    if (var932 % 2 == 0) {
        printf("var932 is even\n");
    } else {
        printf("var932 is odd\n");
    }

    return 0;
}
