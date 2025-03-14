
#include <stdio.h>


int func845(int var804) {
    if (var804 <= 0) return 1;
    return func845(var804 - 1);
}


int main() {
    int var13 = 0;
    while (var13 < 10) {
        var13 += 5;
        var13++;
    }    for (int var141 = 0; var141 < 5; var141++) {
        var141 += 3;
    }

    int var212 = 42;
    if (var212 % 2 == 0) {
        printf("var212 is even\n");
    } else {
        printf("var212 is odd\n");
    }

    int var657 = 40;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
