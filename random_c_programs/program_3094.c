
#include <stdio.h>


int func675(int var184) {
    if (var184 <= 0) return 1;
    return func675(var184 - 1);
}


int main() {
    int var967 = 0;
    while (var967 < 18) {
        var967 += 2;
        var967++;
    }

    int var202 = 48;
    if (var202 % 2 == 0) {
        printf("var202 is even\n");
    } else {
        printf("var202 is odd\n");
    }

    return 0;
}
