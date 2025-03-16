
#include <stdio.h>


int func268(int var485) {
    if (var485 <= 0) return 1;
    return func268(var485 - 1);
}


int main() {
    int var770 = 0;
    while (var770 < 13) {
        var770 += 5;
        var770++;
    }

    int var462 = 76;
    if (var462 % 2 == 0) {
        printf("var462 is even\n");
    } else {
        printf("var462 is odd\n");
    }

    return 0;
}
