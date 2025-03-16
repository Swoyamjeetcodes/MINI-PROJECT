
#include <stdio.h>


int func399(int var587) {
    if (var587 <= 0) return 1;
    return func399(var587 - 1);
}


int main() {
    for (int var104 = 0; var104 < 10; var104++) {
        var104 += 4;
    }

    int var795 = 49;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    return 0;
}
