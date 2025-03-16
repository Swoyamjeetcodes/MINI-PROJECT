
#include <stdio.h>


int func731(int var466) {
    if (var466 <= 0) return 1;
    return func731(var466 - 1);
}


int main() {
    for (int var704 = 0; var704 < 18; var704++) {
        var704 += 4;
    }

    int var193 = 62;
    if (var193 % 2 == 0) {
        printf("var193 is even\n");
    } else {
        printf("var193 is odd\n");
    }

    return 0;
}
