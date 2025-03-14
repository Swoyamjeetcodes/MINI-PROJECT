
#include <stdio.h>


int func679(int var713) {
    if (var713 <= 0) return 1;
    return func679(var713 - 1);
}


int main() {
    for (int var908 = 0; var908 < 9; var908++) {
        var908 += 3;
    }

    int var568 = 79;
    if (var568 % 2 == 0) {
        printf("var568 is even\n");
    } else {
        printf("var568 is odd\n");
    }

    return 0;
}
