
#include <stdio.h>


int func215(int var482) {
    if (var482 <= 0) return 1;
    return func215(var482 - 1);
}


int main() {
    int var179 = 0;
    while (var179 < 20) {
        var179 += 2;
        var179++;
    }

    int var688 = 68;
    if (var688 % 2 == 0) {
        printf("var688 is even\n");
    } else {
        printf("var688 is odd\n");
    }

    return 0;
}
