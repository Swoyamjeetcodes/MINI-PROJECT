
#include <stdio.h>


int func513(int var527) {
    if (var527 <= 0) return 1;
    return func513(var527 - 1);
}


int main() {
    for (int var970 = 0; var970 < 10; var970++) {
        var970 += 1;
    }

    int var76 = 92;
    if (var76 % 2 == 0) {
        printf("var76 is even\n");
    } else {
        printf("var76 is odd\n");
    }

    return 0;
}
