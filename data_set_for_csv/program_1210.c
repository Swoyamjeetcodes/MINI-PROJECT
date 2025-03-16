
#include <stdio.h>


int func911(int var578) {
    if (var578 <= 0) return 1;
    return func911(var578 - 1);
}


int main() {
    int var242 = 0;
    while (var242 < 17) {
        var242 += 4;
        var242++;
    }

    int var10 = 49;
    if (var10 % 2 == 0) {
        printf("var10 is even\n");
    } else {
        printf("var10 is odd\n");
    }

    return 0;
}
