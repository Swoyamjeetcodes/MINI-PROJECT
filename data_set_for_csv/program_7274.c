
#include <stdio.h>


int func267(int var422) {
    if (var422 <= 0) return 1;
    return func267(var422 - 1);
}


int main() {
    for (int var202 = 0; var202 < 20; var202++) {
        var202 += 2;
    }

    int var233 = 51;
    if (var233 % 2 == 0) {
        printf("var233 is even\n");
    } else {
        printf("var233 is odd\n");
    }

    return 0;
}
