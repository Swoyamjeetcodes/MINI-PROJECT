
#include <stdio.h>


int func613(int var59) {
    if (var59 <= 0) return 1;
    return func613(var59 - 1);
}


int main() {
    int var484 = 0;
    while (var484 < 16) {
        var484 += 5;
        var484++;
    }

    int var349 = 48;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    return 0;
}
