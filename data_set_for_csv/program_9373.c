
#include <stdio.h>


int func949(int var117) {
    if (var117 <= 0) return 1;
    return func949(var117 - 1);
}


int main() {
    int var148 = 0;
    while (var148 < 10) {
        var148 += 4;
        var148++;
    }

    int var226 = 1;
    if (var226 % 2 == 0) {
        printf("var226 is even\n");
    } else {
        printf("var226 is odd\n");
    }

    return 0;
}
