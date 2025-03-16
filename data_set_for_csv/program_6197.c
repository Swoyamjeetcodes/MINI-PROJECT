
#include <stdio.h>


int func797(int var833) {
    if (var833 <= 0) return 1;
    return func797(var833 - 1);
}


int main() {
    int var334 = 0;
    while (var334 < 7) {
        var334 += 5;
        var334++;
    }

    int var477 = 35;
    if (var477 % 2 == 0) {
        printf("var477 is even\n");
    } else {
        printf("var477 is odd\n");
    }

    return 0;
}
