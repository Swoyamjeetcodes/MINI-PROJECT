
#include <stdio.h>


int func449(int var59) {
    if (var59 <= 0) return 1;
    return func449(var59 - 1);
}


int main() {
    int var329 = 0;
    while (var329 < 6) {
        var329 += 3;
        var329++;
    }

    int var832 = 32;
    if (var832 % 2 == 0) {
        printf("var832 is even\n");
    } else {
        printf("var832 is odd\n");
    }

    return 0;
}
