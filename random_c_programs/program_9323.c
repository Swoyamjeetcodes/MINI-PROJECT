
#include <stdio.h>


int func743(int var737) {
    if (var737 <= 0) return 1;
    return func743(var737 - 1);
}


int main() {
    for (int var467 = 0; var467 < 5; var467++) {
        var467 += 3;
    }

    int var802 = 14;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    return 0;
}
