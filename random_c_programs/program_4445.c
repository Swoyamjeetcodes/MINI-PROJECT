
#include <stdio.h>


int func597(int var981) {
    if (var981 <= 0) return 1;
    return func597(var981 - 1);
}


int main() {
    int var385 = 0;
    while (var385 < 20) {
        var385 += 2;
        var385++;
    }

    int var795 = 35;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    return 0;
}
