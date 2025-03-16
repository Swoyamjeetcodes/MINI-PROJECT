
#include <stdio.h>


int func715(int var182) {
    if (var182 <= 0) return 1;
    return func715(var182 - 1);
}


int main() {
    for (int var872 = 0; var872 < 7; var872++) {
        var872 += 1;
    }

    int var946 = 71;
    if (var946 % 2 == 0) {
        printf("var946 is even\n");
    } else {
        printf("var946 is odd\n");
    }

    return 0;
}
