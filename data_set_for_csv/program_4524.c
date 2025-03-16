
#include <stdio.h>


int func718(int var512) {
    if (var512 <= 0) return 1;
    return func718(var512 - 1);
}


int main() {
    int var614 = 0;
    while (var614 < 6) {
        var614 += 4;
        var614++;
    }

    int var932 = 44;
    if (var932 % 2 == 0) {
        printf("var932 is even\n");
    } else {
        printf("var932 is odd\n");
    }

    return 0;
}
