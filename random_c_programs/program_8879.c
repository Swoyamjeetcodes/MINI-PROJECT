
#include <stdio.h>


int func586(int var975) {
    if (var975 <= 0) return 1;
    return func586(var975 - 1);
}


int main() {
    int var879 = 0;
    while (var879 < 14) {
        var879 += 3;
        var879++;
    }

    int var582 = 0;
    if (var582 % 2 == 0) {
        printf("var582 is even\n");
    } else {
        printf("var582 is odd\n");
    }

    return 0;
}
