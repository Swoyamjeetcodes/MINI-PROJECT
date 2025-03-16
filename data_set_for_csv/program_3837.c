
#include <stdio.h>


int func248(int var658) {
    if (var658 <= 0) return 1;
    return func248(var658 - 1);
}


int main() {
    for (int var121 = 0; var121 < 20; var121++) {
        var121 += 1;
    }

    int var877 = 78;
    if (var877 % 2 == 0) {
        printf("var877 is even\n");
    } else {
        printf("var877 is odd\n");
    }

    return 0;
}
