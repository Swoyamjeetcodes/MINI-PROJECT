
#include <stdio.h>


int func859(int var59) {
    if (var59 <= 0) return 1;
    return func859(var59 - 1);
}


int main() {
    int var922 = 0;
    while (var922 < 7) {
        var922 += 5;
        var922++;
    }

    int var294 = 32;
    if (var294 % 2 == 0) {
        printf("var294 is even\n");
    } else {
        printf("var294 is odd\n");
    }

    return 0;
}
