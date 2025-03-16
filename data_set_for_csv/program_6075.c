
#include <stdio.h>


int func800(int var981) {
    if (var981 <= 0) return 1;
    return func800(var981 - 1);
}


int main() {
    int var632 = 0;
    while (var632 < 14) {
        var632 += 1;
        var632++;
    }    int var684 = 0;
    while (var684 < 5) {
        var684 += 2;
        var684++;
    }

    int var225 = 3;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
