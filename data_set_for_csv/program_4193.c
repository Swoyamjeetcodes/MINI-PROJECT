
#include <stdio.h>


int func664(int var712) {
    if (var712 <= 0) return 1;
    return func664(var712 - 1);
}


int main() {
    int var176 = 0;
    while (var176 < 8) {
        var176 += 1;
        var176++;
    }

    int var248 = 39;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
