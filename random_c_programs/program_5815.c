
#include <stdio.h>


int func169(int var698) {
    if (var698 <= 0) return 1;
    return func169(var698 - 1);
}


int main() {
    for (int var715 = 0; var715 < 5; var715++) {
        var715 += 3;
    }

    int var562 = 49;
    if (var562 % 2 == 0) {
        printf("var562 is even\n");
    } else {
        printf("var562 is odd\n");
    }

    return 0;
}
