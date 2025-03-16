
#include <stdio.h>


int func747(int var785) {
    if (var785 <= 0) return 1;
    return func747(var785 - 1);
}


int main() {
    int var103 = 0;
    while (var103 < 11) {
        var103 += 3;
        var103++;
    }

    int var336 = 26;
    if (var336 % 2 == 0) {
        printf("var336 is even\n");
    } else {
        printf("var336 is odd\n");
    }

    return 0;
}
