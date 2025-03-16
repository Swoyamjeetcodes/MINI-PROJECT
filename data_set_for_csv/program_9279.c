
#include <stdio.h>


int func650(int var762) {
    if (var762 <= 0) return 1;
    return func650(var762 - 1);
}


int main() {
    int var171 = 0;
    while (var171 < 5) {
        var171 += 3;
        var171++;
    }

    int var328 = 5;
    if (var328 % 2 == 0) {
        printf("var328 is even\n");
    } else {
        printf("var328 is odd\n");
    }

    return 0;
}
