
#include <stdio.h>


int func94(int var195) {
    if (var195 <= 0) return 1;
    return func94(var195 - 1);
}


int main() {
    for (int var742 = 0; var742 < 18; var742++) {
        var742 += 2;
    }

    int var47 = 61;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    return 0;
}
