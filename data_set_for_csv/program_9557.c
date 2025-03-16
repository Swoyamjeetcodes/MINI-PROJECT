
#include <stdio.h>


int func237(int var299) {
    if (var299 <= 0) return 1;
    return func237(var299 - 1);
}


int main() {
    int var898 = 0;
    while (var898 < 5) {
        var898 += 2;
        var898++;
    }

    int var657 = 61;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
