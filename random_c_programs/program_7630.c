
#include <stdio.h>


int func924(int var213) {
    if (var213 <= 0) return 1;
    return func924(var213 - 1);
}


int main() {
    for (int var965 = 0; var965 < 9; var965++) {
        var965 += 4;
    }

    int var205 = 15;
    if (var205 % 2 == 0) {
        printf("var205 is even\n");
    } else {
        printf("var205 is odd\n");
    }

    return 0;
}
