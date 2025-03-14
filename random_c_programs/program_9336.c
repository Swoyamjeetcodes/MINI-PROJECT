
#include <stdio.h>


int func267(int var898) {
    if (var898 <= 0) return 1;
    return func267(var898 - 1);
}


int main() {
    int var633 = 0;
    while (var633 < 14) {
        var633 += 5;
        var633++;
    }

    int var741 = 78;
    if (var741 % 2 == 0) {
        printf("var741 is even\n");
    } else {
        printf("var741 is odd\n");
    }

    return 0;
}
