
#include <stdio.h>


int func579(int var450) {
    if (var450 <= 0) return 1;
    return func579(var450 - 1);
}


int main() {
    int var898 = 0;
    while (var898 < 16) {
        var898 += 3;
        var898++;
    }

    int var44 = 11;
    if (var44 % 2 == 0) {
        printf("var44 is even\n");
    } else {
        printf("var44 is odd\n");
    }

    return 0;
}
