
#include <stdio.h>


int func202(int var285) {
    if (var285 <= 0) return 1;
    return func202(var285 - 1);
}


int main() {
    for (int var268 = 0; var268 < 18; var268++) {
        var268 += 1;
    }

    int var952 = 96;
    if (var952 % 2 == 0) {
        printf("var952 is even\n");
    } else {
        printf("var952 is odd\n");
    }

    return 0;
}
