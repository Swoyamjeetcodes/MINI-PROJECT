
#include <stdio.h>


int func190(int var620) {
    if (var620 <= 0) return 1;
    return func190(var620 - 1);
}


int main() {
    for (int var732 = 0; var732 < 15; var732++) {
        var732 += 5;
    }

    int var323 = 36;
    if (var323 % 2 == 0) {
        printf("var323 is even\n");
    } else {
        printf("var323 is odd\n");
    }

    return 0;
}
