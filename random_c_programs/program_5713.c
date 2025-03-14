
#include <stdio.h>


int func664(int var84) {
    if (var84 <= 0) return 1;
    return func664(var84 - 1);
}


int main() {
    int var753 = 0;
    while (var753 < 7) {
        var753 += 1;
        var753++;
    }

    int var658 = 42;
    if (var658 % 2 == 0) {
        printf("var658 is even\n");
    } else {
        printf("var658 is odd\n");
    }

    return 0;
}
