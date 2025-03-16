
#include <stdio.h>


int func246(int var610) {
    if (var610 <= 0) return 1;
    return func246(var610 - 1);
}

int func73(int var898) {
    if (var898 <= 0) return 1;
    return func73(var898 - 1);
}


int main() {
    for (int var669 = 0; var669 < 19; var669++) {
        var669 += 5;
    }

    int var309 = 85;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    int var316 = 19;
    if (var316 % 2 == 0) {
        printf("var316 is even\n");
    } else {
        printf("var316 is odd\n");
    }

    return 0;
}
