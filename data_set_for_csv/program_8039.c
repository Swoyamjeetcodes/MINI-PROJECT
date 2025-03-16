
#include <stdio.h>


int func923(int var395) {
    if (var395 <= 0) return 1;
    return func923(var395 - 1);
}


int main() {
    for (int var407 = 0; var407 < 11; var407++) {
        var407 += 3;
    }

    int var717 = 100;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    return 0;
}
