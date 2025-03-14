
#include <stdio.h>


int func233(int var97) {
    if (var97 <= 0) return 1;
    return func233(var97 - 1);
}


int main() {
    int var963 = 0;
    while (var963 < 16) {
        var963 += 4;
        var963++;
    }

    int var785 = 49;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    return 0;
}
