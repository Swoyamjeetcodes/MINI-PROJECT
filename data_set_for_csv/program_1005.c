
#include <stdio.h>


int func491(int var957) {
    if (var957 <= 0) return 1;
    return func491(var957 - 1);
}


int main() {
    int var643 = 0;
    while (var643 < 10) {
        var643 += 4;
        var643++;
    }

    int var462 = 18;
    if (var462 % 2 == 0) {
        printf("var462 is even\n");
    } else {
        printf("var462 is odd\n");
    }

    return 0;
}
