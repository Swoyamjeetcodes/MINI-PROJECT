
#include <stdio.h>


int func856(int var736) {
    if (var736 <= 0) return 1;
    return func856(var736 - 1);
}


int main() {
    int var348 = 0;
    while (var348 < 9) {
        var348 += 2;
        var348++;
    }

    int var195 = 2;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    return 0;
}
