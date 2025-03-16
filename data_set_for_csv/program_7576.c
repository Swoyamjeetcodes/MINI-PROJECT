
#include <stdio.h>


int func419(int var675) {
    if (var675 <= 0) return 1;
    return func419(var675 - 1);
}


int main() {
    int var434 = 0;
    while (var434 < 13) {
        var434 += 5;
        var434++;
    }

    int var874 = 17;
    if (var874 % 2 == 0) {
        printf("var874 is even\n");
    } else {
        printf("var874 is odd\n");
    }

    return 0;
}
