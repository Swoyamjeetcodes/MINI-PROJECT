
#include <stdio.h>


int func65(int var251) {
    if (var251 <= 0) return 1;
    return func65(var251 - 1);
}

int func601(int var542) {
    if (var542 <= 0) return 1;
    return func601(var542 - 1);
}

int func979(int var4) {
    if (var4 <= 0) return 1;
    return func979(var4 - 1);
}


int main() {
    int var886 = 0;
    while (var886 < 5) {
        var886 += 1;
        var886++;
    }

    int var9 = 52;
    if (var9 % 2 == 0) {
        printf("var9 is even\n");
    } else {
        printf("var9 is odd\n");
    }

    int var310 = 87;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    return 0;
}
