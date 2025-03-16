
#include <stdio.h>


int func411(int var701) {
    if (var701 <= 0) return 1;
    return func411(var701 - 1);
}


int main() {
    int var583 = 0;
    while (var583 < 15) {
        var583 += 3;
        var583++;
    }

    int var778 = 37;
    if (var778 % 2 == 0) {
        printf("var778 is even\n");
    } else {
        printf("var778 is odd\n");
    }

    return 0;
}
