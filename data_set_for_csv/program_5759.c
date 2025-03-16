
#include <stdio.h>


int func283(int var900) {
    if (var900 <= 0) return 1;
    return func283(var900 - 1);
}


int main() {
    int var122 = 0;
    while (var122 < 8) {
        var122 += 2;
        var122++;
    }

    int var450 = 94;
    if (var450 % 2 == 0) {
        printf("var450 is even\n");
    } else {
        printf("var450 is odd\n");
    }

    return 0;
}
