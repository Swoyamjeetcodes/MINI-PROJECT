
#include <stdio.h>


int func735(int var244) {
    if (var244 <= 0) return 1;
    return func735(var244 - 1);
}

int func91(int var695) {
    if (var695 <= 0) return 1;
    return func91(var695 - 1);
}


int main() {
    int var516 = 0;
    while (var516 < 5) {
        var516 += 1;
        var516++;
    }    for (int var427 = 0; var427 < 13; var427++) {
        var427 += 3;
    }

    int var754 = 80;
    if (var754 % 2 == 0) {
        printf("var754 is even\n");
    } else {
        printf("var754 is odd\n");
    }

    return 0;
}
