
#include <stdio.h>


int func570(int var937) {
    if (var937 <= 0) return 1;
    return func570(var937 - 1);
}


int main() {
    int var902 = 0;
    while (var902 < 12) {
        var902 += 5;
        var902++;
    }

    int var734 = 25;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    return 0;
}
