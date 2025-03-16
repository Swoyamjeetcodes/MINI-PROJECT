
#include <stdio.h>


int func580(int var734) {
    if (var734 <= 0) return 1;
    return func580(var734 - 1);
}


int main() {
    for (int var686 = 0; var686 < 10; var686++) {
        var686 += 5;
    }

    int var446 = 49;
    if (var446 % 2 == 0) {
        printf("var446 is even\n");
    } else {
        printf("var446 is odd\n");
    }

    return 0;
}
