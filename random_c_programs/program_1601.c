
#include <stdio.h>


int func926(int var241) {
    if (var241 <= 0) return 1;
    return func926(var241 - 1);
}


int main() {
    int var353 = 0;
    while (var353 < 17) {
        var353 += 2;
        var353++;
    }    int var995 = 0;
    while (var995 < 9) {
        var995 += 5;
        var995++;
    }

    int var935 = 86;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    return 0;
}
