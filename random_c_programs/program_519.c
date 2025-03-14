
#include <stdio.h>


int func60(int var826) {
    if (var826 <= 0) return 1;
    return func60(var826 - 1);
}


int main() {
    int var668 = 0;
    while (var668 < 10) {
        var668 += 1;
        var668++;
    }

    int var360 = 2;
    if (var360 % 2 == 0) {
        printf("var360 is even\n");
    } else {
        printf("var360 is odd\n");
    }

    return 0;
}
