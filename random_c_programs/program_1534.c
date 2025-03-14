
#include <stdio.h>


int func191(int var726) {
    if (var726 <= 0) return 1;
    return func191(var726 - 1);
}


int main() {
    int var717 = 0;
    while (var717 < 18) {
        var717 += 4;
        var717++;
    }    int var770 = 0;
    while (var770 < 7) {
        var770 += 2;
        var770++;
    }

    int var298 = 52;
    if (var298 % 2 == 0) {
        printf("var298 is even\n");
    } else {
        printf("var298 is odd\n");
    }

    return 0;
}
