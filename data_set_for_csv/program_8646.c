
#include <stdio.h>


int func256(int var317) {
    if (var317 <= 0) return 1;
    return func256(var317 - 1);
}


int main() {
    int var693 = 0;
    while (var693 < 11) {
        var693 += 1;
        var693++;
    }

    int var479 = 19;
    if (var479 % 2 == 0) {
        printf("var479 is even\n");
    } else {
        printf("var479 is odd\n");
    }

    return 0;
}
