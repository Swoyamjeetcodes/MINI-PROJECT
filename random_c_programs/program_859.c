
#include <stdio.h>


int func556(int var853) {
    if (var853 <= 0) return 1;
    return func556(var853 - 1);
}


int main() {
    int var221 = 0;
    while (var221 < 9) {
        var221 += 2;
        var221++;
    }

    int var283 = 2;
    if (var283 % 2 == 0) {
        printf("var283 is even\n");
    } else {
        printf("var283 is odd\n");
    }

    return 0;
}
