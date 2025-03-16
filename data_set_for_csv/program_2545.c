
#include <stdio.h>


int func246(int var781) {
    if (var781 <= 0) return 1;
    return func246(var781 - 1);
}


int main() {
    for (int var616 = 0; var616 < 12; var616++) {
        var616 += 4;
    }    int var212 = 0;
    while (var212 < 7) {
        var212 += 5;
        var212++;
    }

    int var188 = 92;
    if (var188 % 2 == 0) {
        printf("var188 is even\n");
    } else {
        printf("var188 is odd\n");
    }

    int var644 = 45;
    if (var644 % 2 == 0) {
        printf("var644 is even\n");
    } else {
        printf("var644 is odd\n");
    }

    int var448 = 55;
    if (var448 % 2 == 0) {
        printf("var448 is even\n");
    } else {
        printf("var448 is odd\n");
    }

    return 0;
}
