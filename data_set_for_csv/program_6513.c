
#include <stdio.h>


int func399(int var822) {
    if (var822 <= 0) return 1;
    return func399(var822 - 1);
}


int main() {
    int var677 = 0;
    while (var677 < 6) {
        var677 += 3;
        var677++;
    }

    int var590 = 93;
    if (var590 % 2 == 0) {
        printf("var590 is even\n");
    } else {
        printf("var590 is odd\n");
    }

    return 0;
}
