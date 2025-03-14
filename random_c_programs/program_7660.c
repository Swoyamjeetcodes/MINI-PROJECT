
#include <stdio.h>


int func196(int var642) {
    if (var642 <= 0) return 1;
    return func196(var642 - 1);
}

int func154(int var232) {
    if (var232 <= 0) return 1;
    return func154(var232 - 1);
}

int func422(int var282) {
    if (var282 <= 0) return 1;
    return func422(var282 - 1);
}


int main() {
    int var221 = 0;
    while (var221 < 11) {
        var221 += 5;
        var221++;
    }

    int var832 = 14;
    if (var832 % 2 == 0) {
        printf("var832 is even\n");
    } else {
        printf("var832 is odd\n");
    }

    int var311 = 59;
    if (var311 % 2 == 0) {
        printf("var311 is even\n");
    } else {
        printf("var311 is odd\n");
    }

    return 0;
}
