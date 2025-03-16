
#include <stdio.h>


int func39(int var538) {
    if (var538 <= 0) return 1;
    return func39(var538 - 1);
}


int main() {
    for (int var992 = 0; var992 < 8; var992++) {
        var992 += 5;
    }

    int var717 = 33;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    return 0;
}
