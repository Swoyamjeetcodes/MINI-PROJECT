
#include <stdio.h>


int func29(int var669) {
    if (var669 <= 0) return 1;
    return func29(var669 - 1);
}


int main() {
    int var802 = 0;
    while (var802 < 11) {
        var802 += 5;
        var802++;
    }

    int var833 = 27;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    return 0;
}
