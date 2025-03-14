
#include <stdio.h>


int func980(int var89) {
    if (var89 <= 0) return 1;
    return func980(var89 - 1);
}


int main() {
    for (int var935 = 0; var935 < 12; var935++) {
        var935 += 2;
    }

    int var241 = 62;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    return 0;
}
