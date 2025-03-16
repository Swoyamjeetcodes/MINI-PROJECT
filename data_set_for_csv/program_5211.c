
#include <stdio.h>


int func725(int var186) {
    if (var186 <= 0) return 1;
    return func725(var186 - 1);
}


int main() {
    int var772 = 0;
    while (var772 < 6) {
        var772 += 1;
        var772++;
    }

    int var644 = 7;
    if (var644 % 2 == 0) {
        printf("var644 is even\n");
    } else {
        printf("var644 is odd\n");
    }

    return 0;
}
