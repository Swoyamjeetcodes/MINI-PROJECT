
#include <stdio.h>


int func875(int var556) {
    if (var556 <= 0) return 1;
    return func875(var556 - 1);
}


int main() {
    int var329 = 0;
    while (var329 < 17) {
        var329 += 4;
        var329++;
    }

    int var225 = 43;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
