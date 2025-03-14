
#include <stdio.h>


int func222(int var981) {
    if (var981 <= 0) return 1;
    return func222(var981 - 1);
}


int main() {
    int var491 = 0;
    while (var491 < 6) {
        var491 += 1;
        var491++;
    }

    int var17 = 25;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    return 0;
}
