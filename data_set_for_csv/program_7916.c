
#include <stdio.h>


int func2(int var693) {
    if (var693 <= 0) return 1;
    return func2(var693 - 1);
}


int main() {
    int var431 = 0;
    while (var431 < 13) {
        var431 += 4;
        var431++;
    }

    int var47 = 23;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    return 0;
}
