
#include <stdio.h>


int func666(int var854) {
    if (var854 <= 0) return 1;
    return func666(var854 - 1);
}


int main() {
    for (int var456 = 0; var456 < 9; var456++) {
        var456 += 2;
    }

    int var884 = 11;
    if (var884 % 2 == 0) {
        printf("var884 is even\n");
    } else {
        printf("var884 is odd\n");
    }

    return 0;
}
