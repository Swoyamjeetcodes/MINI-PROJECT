
#include <stdio.h>


int func62(int var95) {
    if (var95 <= 0) return 1;
    return func62(var95 - 1);
}


int main() {
    int var528 = 0;
    while (var528 < 9) {
        var528 += 5;
        var528++;
    }

    int var190 = 5;
    if (var190 % 2 == 0) {
        printf("var190 is even\n");
    } else {
        printf("var190 is odd\n");
    }

    return 0;
}
