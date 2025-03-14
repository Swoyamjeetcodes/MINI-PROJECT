
#include <stdio.h>


int func749(int var898) {
    if (var898 <= 0) return 1;
    return func749(var898 - 1);
}


int main() {
    int var620 = 0;
    while (var620 < 19) {
        var620 += 2;
        var620++;
    }

    int var409 = 66;
    if (var409 % 2 == 0) {
        printf("var409 is even\n");
    } else {
        printf("var409 is odd\n");
    }

    return 0;
}
