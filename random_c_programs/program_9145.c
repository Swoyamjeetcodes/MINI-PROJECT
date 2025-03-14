
#include <stdio.h>


int func685(int var898) {
    if (var898 <= 0) return 1;
    return func685(var898 - 1);
}


int main() {
    int var901 = 0;
    while (var901 < 6) {
        var901 += 1;
        var901++;
    }

    int var204 = 100;
    if (var204 % 2 == 0) {
        printf("var204 is even\n");
    } else {
        printf("var204 is odd\n");
    }

    return 0;
}
