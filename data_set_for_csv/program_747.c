
#include <stdio.h>


int func812(int var682) {
    if (var682 <= 0) return 1;
    return func812(var682 - 1);
}


int main() {
    int var937 = 0;
    while (var937 < 9) {
        var937 += 5;
        var937++;
    }

    int var455 = 69;
    if (var455 % 2 == 0) {
        printf("var455 is even\n");
    } else {
        printf("var455 is odd\n");
    }

    return 0;
}
