
#include <stdio.h>


int func60(int var508) {
    if (var508 <= 0) return 1;
    return func60(var508 - 1);
}


int main() {
    for (int var467 = 0; var467 < 14; var467++) {
        var467 += 3;
    }

    int var178 = 92;
    if (var178 % 2 == 0) {
        printf("var178 is even\n");
    } else {
        printf("var178 is odd\n");
    }

    return 0;
}
