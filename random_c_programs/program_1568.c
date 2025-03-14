
#include <stdio.h>


int func561(int var985) {
    if (var985 <= 0) return 1;
    return func561(var985 - 1);
}


int main() {
    int var122 = 0;
    while (var122 < 11) {
        var122 += 5;
        var122++;
    }

    int var658 = 38;
    if (var658 % 2 == 0) {
        printf("var658 is even\n");
    } else {
        printf("var658 is odd\n");
    }

    return 0;
}
