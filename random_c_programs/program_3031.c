
#include <stdio.h>


int func241(int var176) {
    if (var176 <= 0) return 1;
    return func241(var176 - 1);
}


int main() {
    int var623 = 0;
    while (var623 < 18) {
        var623 += 4;
        var623++;
    }

    int var769 = 46;
    if (var769 % 2 == 0) {
        printf("var769 is even\n");
    } else {
        printf("var769 is odd\n");
    }

    return 0;
}
