
#include <stdio.h>


int func120(int var466) {
    if (var466 <= 0) return 1;
    return func120(var466 - 1);
}


int main() {
    for (int var552 = 0; var552 < 20; var552++) {
        var552 += 1;
    }

    int var238 = 40;
    if (var238 % 2 == 0) {
        printf("var238 is even\n");
    } else {
        printf("var238 is odd\n");
    }

    return 0;
}
