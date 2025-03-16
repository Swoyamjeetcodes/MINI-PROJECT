
#include <stdio.h>


int func212(int var127) {
    if (var127 <= 0) return 1;
    return func212(var127 - 1);
}


int main() {
    for (int var440 = 0; var440 < 18; var440++) {
        var440 += 2;
    }

    int var857 = 74;
    if (var857 % 2 == 0) {
        printf("var857 is even\n");
    } else {
        printf("var857 is odd\n");
    }

    return 0;
}
