
#include <stdio.h>


int func854(int var850) {
    if (var850 <= 0) return 1;
    return func854(var850 - 1);
}


int main() {
    for (int var554 = 0; var554 < 12; var554++) {
        var554 += 4;
    }

    int var129 = 37;
    if (var129 % 2 == 0) {
        printf("var129 is even\n");
    } else {
        printf("var129 is odd\n");
    }

    return 0;
}
