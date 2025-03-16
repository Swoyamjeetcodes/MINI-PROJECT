
#include <stdio.h>


int func986(int var810) {
    if (var810 <= 0) return 1;
    return func986(var810 - 1);
}


int main() {
    int var775 = 0;
    while (var775 < 20) {
        var775 += 5;
        var775++;
    }

    int var762 = 0;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    return 0;
}
