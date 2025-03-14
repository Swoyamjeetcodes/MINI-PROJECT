
#include <stdio.h>


int func636(int var383) {
    if (var383 <= 0) return 1;
    return func636(var383 - 1);
}


int main() {
    int var746 = 0;
    while (var746 < 14) {
        var746 += 1;
        var746++;
    }

    int var773 = 42;
    if (var773 % 2 == 0) {
        printf("var773 is even\n");
    } else {
        printf("var773 is odd\n");
    }

    return 0;
}
