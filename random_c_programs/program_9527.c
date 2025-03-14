
#include <stdio.h>


int func175(int var736) {
    if (var736 <= 0) return 1;
    return func175(var736 - 1);
}


int main() {
    for (int var124 = 0; var124 < 16; var124++) {
        var124 += 5;
    }

    int var175 = 78;
    if (var175 % 2 == 0) {
        printf("var175 is even\n");
    } else {
        printf("var175 is odd\n");
    }

    return 0;
}
