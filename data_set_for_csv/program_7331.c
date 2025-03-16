
#include <stdio.h>


int func706(int var723) {
    if (var723 <= 0) return 1;
    return func706(var723 - 1);
}


int main() {
    int var813 = 0;
    while (var813 < 12) {
        var813 += 2;
        var813++;
    }

    int var449 = 18;
    if (var449 % 2 == 0) {
        printf("var449 is even\n");
    } else {
        printf("var449 is odd\n");
    }

    return 0;
}
