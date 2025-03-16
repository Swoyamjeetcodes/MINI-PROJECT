
#include <stdio.h>


int func446(int var672) {
    if (var672 <= 0) return 1;
    return func446(var672 - 1);
}


int main() {
    for (int var832 = 0; var832 < 5; var832++) {
        var832 += 2;
    }

    int var694 = 31;
    if (var694 % 2 == 0) {
        printf("var694 is even\n");
    } else {
        printf("var694 is odd\n");
    }

    return 0;
}
