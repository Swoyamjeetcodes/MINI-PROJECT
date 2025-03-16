
#include <stdio.h>


int func839(int var872) {
    if (var872 <= 0) return 1;
    return func839(var872 - 1);
}


int main() {
    int var523 = 0;
    while (var523 < 8) {
        var523 += 1;
        var523++;
    }

    int var389 = 99;
    if (var389 % 2 == 0) {
        printf("var389 is even\n");
    } else {
        printf("var389 is odd\n");
    }

    return 0;
}
