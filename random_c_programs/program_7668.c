
#include <stdio.h>


int func638(int var402) {
    if (var402 <= 0) return 1;
    return func638(var402 - 1);
}


int main() {
    for (int var219 = 0; var219 < 10; var219++) {
        var219 += 2;
    }

    int var816 = 1;
    if (var816 % 2 == 0) {
        printf("var816 is even\n");
    } else {
        printf("var816 is odd\n");
    }

    return 0;
}
