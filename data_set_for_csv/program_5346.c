
#include <stdio.h>


int func450(int var911) {
    if (var911 <= 0) return 1;
    return func450(var911 - 1);
}


int main() {
    for (int var450 = 0; var450 < 7; var450++) {
        var450 += 3;
    }

    int var740 = 27;
    if (var740 % 2 == 0) {
        printf("var740 is even\n");
    } else {
        printf("var740 is odd\n");
    }

    return 0;
}
