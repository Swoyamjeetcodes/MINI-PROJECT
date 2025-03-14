
#include <stdio.h>


int func44(int var497) {
    if (var497 <= 0) return 1;
    return func44(var497 - 1);
}


int main() {
    for (int var316 = 0; var316 < 19; var316++) {
        var316 += 5;
    }

    int var274 = 75;
    if (var274 % 2 == 0) {
        printf("var274 is even\n");
    } else {
        printf("var274 is odd\n");
    }

    int var785 = 13;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    return 0;
}
