
#include <stdio.h>


int func715(int var641) {
    if (var641 <= 0) return 1;
    return func715(var641 - 1);
}


int main() {
    int var826 = 0;
    while (var826 < 5) {
        var826 += 2;
        var826++;
    }

    int var378 = 62;
    if (var378 % 2 == 0) {
        printf("var378 is even\n");
    } else {
        printf("var378 is odd\n");
    }

    return 0;
}
