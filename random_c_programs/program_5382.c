
#include <stdio.h>


int func721(int var182) {
    if (var182 <= 0) return 1;
    return func721(var182 - 1);
}


int main() {
    int var320 = 0;
    while (var320 < 8) {
        var320 += 3;
        var320++;
    }

    int var957 = 52;
    if (var957 % 2 == 0) {
        printf("var957 is even\n");
    } else {
        printf("var957 is odd\n");
    }

    return 0;
}
