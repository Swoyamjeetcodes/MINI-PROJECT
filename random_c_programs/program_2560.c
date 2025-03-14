
#include <stdio.h>


int func200(int var604) {
    if (var604 <= 0) return 1;
    return func200(var604 - 1);
}


int main() {
    for (int var506 = 0; var506 < 11; var506++) {
        var506 += 3;
    }

    int var905 = 100;
    if (var905 % 2 == 0) {
        printf("var905 is even\n");
    } else {
        printf("var905 is odd\n");
    }

    int var324 = 81;
    if (var324 % 2 == 0) {
        printf("var324 is even\n");
    } else {
        printf("var324 is odd\n");
    }

    return 0;
}
