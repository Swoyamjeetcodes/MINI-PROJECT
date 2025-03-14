
#include <stdio.h>


int func231(int var704) {
    if (var704 <= 0) return 1;
    return func231(var704 - 1);
}


int main() {
    for (int var795 = 0; var795 < 17; var795++) {
        var795 += 3;
    }

    int var758 = 19;
    if (var758 % 2 == 0) {
        printf("var758 is even\n");
    } else {
        printf("var758 is odd\n");
    }

    return 0;
}
