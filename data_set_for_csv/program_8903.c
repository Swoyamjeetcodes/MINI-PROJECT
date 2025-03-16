
#include <stdio.h>


int func700(int var7) {
    if (var7 <= 0) return 1;
    return func700(var7 - 1);
}


int main() {
    int var484 = 0;
    while (var484 < 16) {
        var484 += 1;
        var484++;
    }

    int var997 = 28;
    if (var997 % 2 == 0) {
        printf("var997 is even\n");
    } else {
        printf("var997 is odd\n");
    }

    return 0;
}
