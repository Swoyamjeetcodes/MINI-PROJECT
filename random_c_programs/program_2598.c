
#include <stdio.h>


int func632(int var195) {
    if (var195 <= 0) return 1;
    return func632(var195 - 1);
}


int main() {
    for (int var346 = 0; var346 < 12; var346++) {
        var346 += 2;
    }

    int var898 = 71;
    if (var898 % 2 == 0) {
        printf("var898 is even\n");
    } else {
        printf("var898 is odd\n");
    }

    return 0;
}
