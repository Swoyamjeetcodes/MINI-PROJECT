
#include <stdio.h>


int func839(int var455) {
    if (var455 <= 0) return 1;
    return func839(var455 - 1);
}


int main() {
    int var632 = 0;
    while (var632 < 16) {
        var632 += 2;
        var632++;
    }

    int var195 = 29;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    return 0;
}
