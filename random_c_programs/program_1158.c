
#include <stdio.h>


int func315(int var196) {
    if (var196 <= 0) return 1;
    return func315(var196 - 1);
}


int main() {
    int var69 = 0;
    while (var69 < 12) {
        var69 += 4;
        var69++;
    }

    int var768 = 34;
    if (var768 % 2 == 0) {
        printf("var768 is even\n");
    } else {
        printf("var768 is odd\n");
    }

    return 0;
}
