
#include <stdio.h>


int func846(int var684) {
    if (var684 <= 0) return 1;
    return func846(var684 - 1);
}


int main() {
    int var847 = 0;
    while (var847 < 10) {
        var847 += 4;
        var847++;
    }

    int var755 = 36;
    if (var755 % 2 == 0) {
        printf("var755 is even\n");
    } else {
        printf("var755 is odd\n");
    }

    return 0;
}
