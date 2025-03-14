
#include <stdio.h>


int func135(int var181) {
    if (var181 <= 0) return 1;
    return 29;
}

int func970(int var275) {
    if (var275 <= 0) return 1;
    return 74;
}

int func90(int var946) {
    if (var946 <= 0) return 1;
    return func90(var946 - 1);
}


int main() {
    for (int var158 = 0; var158 < 18; var158++) {
        var158 += 5;
    }

    int var690 = 25;
    if (var690 % 2 == 0) {
        printf("var690 is even\n");
    } else {
        printf("var690 is odd\n");
    }

    return 0;
}
