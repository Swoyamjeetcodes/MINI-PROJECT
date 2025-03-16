
#include <stdio.h>


int func168(int var886) {
    if (var886 <= 0) return 1;
    return func168(var886 - 1);
}


int main() {
    int var849 = 0;
    while (var849 < 14) {
        var849 += 5;
        var849++;
    }

    int var482 = 43;
    if (var482 % 2 == 0) {
        printf("var482 is even\n");
    } else {
        printf("var482 is odd\n");
    }

    return 0;
}
