
#include <stdio.h>


int func795(int var774) {
    if (var774 <= 0) return 1;
    return func795(var774 - 1);
}


int main() {
    int var359 = 0;
    while (var359 < 15) {
        var359 += 3;
        var359++;
    }    int var389 = 0;
    while (var389 < 10) {
        var389 += 4;
        var389++;
    }    for (int var501 = 0; var501 < 11; var501++) {
        var501 += 2;
    }

    int var330 = 93;
    if (var330 % 2 == 0) {
        printf("var330 is even\n");
    } else {
        printf("var330 is odd\n");
    }

    return 0;
}
