
#include <stdio.h>


int func433(int var148) {
    if (var148 <= 0) return 1;
    return func433(var148 - 1);
}


int main() {
    int var892 = 0;
    while (var892 < 9) {
        var892 += 3;
        var892++;
    }

    int var255 = 80;
    if (var255 % 2 == 0) {
        printf("var255 is even\n");
    } else {
        printf("var255 is odd\n");
    }

    return 0;
}
