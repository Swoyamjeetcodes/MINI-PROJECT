
#include <stdio.h>


int func1(int var659) {
    if (var659 <= 0) return 1;
    return func1(var659 - 1);
}


int main() {
    int var851 = 0;
    while (var851 < 5) {
        var851 += 4;
        var851++;
    }

    int var247 = 80;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    return 0;
}
