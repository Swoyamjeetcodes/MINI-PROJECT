
#include <stdio.h>


int func364(int var202) {
    if (var202 <= 0) return 1;
    return func364(var202 - 1);
}


int main() {
    for (int var786 = 0; var786 < 10; var786++) {
        var786 += 2;
    }

    int var97 = 95;
    if (var97 % 2 == 0) {
        printf("var97 is even\n");
    } else {
        printf("var97 is odd\n");
    }

    return 0;
}
