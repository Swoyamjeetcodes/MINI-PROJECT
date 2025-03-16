
#include <stdio.h>


int func373(int var713) {
    if (var713 <= 0) return 1;
    return func373(var713 - 1);
}


int main() {
    for (int var82 = 0; var82 < 13; var82++) {
        var82 += 3;
    }

    int var462 = 56;
    if (var462 % 2 == 0) {
        printf("var462 is even\n");
    } else {
        printf("var462 is odd\n");
    }

    return 0;
}
