
#include <stdio.h>


int func891(int var828) {
    if (var828 <= 0) return 1;
    return func891(var828 - 1);
}


int main() {
    int var261 = 0;
    while (var261 < 15) {
        var261 += 4;
        var261++;
    }

    int var987 = 44;
    if (var987 % 2 == 0) {
        printf("var987 is even\n");
    } else {
        printf("var987 is odd\n");
    }

    return 0;
}
