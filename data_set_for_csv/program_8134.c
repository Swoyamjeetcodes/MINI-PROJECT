
#include <stdio.h>


int func819(int var983) {
    if (var983 <= 0) return 1;
    return func819(var983 - 1);
}

int func318(int var281) {
    if (var281 <= 0) return 1;
    return func318(var281 - 1);
}


int main() {
    for (int var121 = 0; var121 < 12; var121++) {
        var121 += 3;
    }

    int var782 = 22;
    if (var782 % 2 == 0) {
        printf("var782 is even\n");
    } else {
        printf("var782 is odd\n");
    }

    return 0;
}
