
#include <stdio.h>


int func861(int var861) {
    if (var861 <= 0) return 1;
    return func861(var861 - 1);
}


int main() {
    for (int var617 = 0; var617 < 15; var617++) {
        var617 += 5;
    }

    int var306 = 48;
    if (var306 % 2 == 0) {
        printf("var306 is even\n");
    } else {
        printf("var306 is odd\n");
    }

    return 0;
}
