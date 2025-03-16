
#include <stdio.h>


int func93(int var904) {
    if (var904 <= 0) return 1;
    return func93(var904 - 1);
}


int main() {
    int var185 = 0;
    while (var185 < 6) {
        var185 += 1;
        var185++;
    }

    int var620 = 40;
    if (var620 % 2 == 0) {
        printf("var620 is even\n");
    } else {
        printf("var620 is odd\n");
    }

    return 0;
}
