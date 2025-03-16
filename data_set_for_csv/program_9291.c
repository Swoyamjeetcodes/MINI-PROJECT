
#include <stdio.h>


int func609(int var90) {
    if (var90 <= 0) return 1;
    return func609(var90 - 1);
}


int main() {
    int var154 = 0;
    while (var154 < 6) {
        var154 += 5;
        var154++;
    }

    int var749 = 33;
    if (var749 % 2 == 0) {
        printf("var749 is even\n");
    } else {
        printf("var749 is odd\n");
    }

    return 0;
}
