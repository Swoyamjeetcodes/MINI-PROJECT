
#include <stdio.h>


int func335(int var139) {
    if (var139 <= 0) return 1;
    return func335(var139 - 1);
}


int main() {
    int var366 = 0;
    while (var366 < 5) {
        var366 += 1;
        var366++;
    }

    int var712 = 54;
    if (var712 % 2 == 0) {
        printf("var712 is even\n");
    } else {
        printf("var712 is odd\n");
    }

    return 0;
}
