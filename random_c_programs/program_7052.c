
#include <stdio.h>


int func758(int var524) {
    if (var524 <= 0) return 1;
    return func758(var524 - 1);
}


int main() {
    int var279 = 0;
    while (var279 < 18) {
        var279 += 4;
        var279++;
    }

    int var32 = 74;
    if (var32 % 2 == 0) {
        printf("var32 is even\n");
    } else {
        printf("var32 is odd\n");
    }

    return 0;
}
