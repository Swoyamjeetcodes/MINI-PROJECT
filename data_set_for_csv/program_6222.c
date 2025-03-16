
#include <stdio.h>


int func443(int var702) {
    if (var702 <= 0) return 1;
    return func443(var702 - 1);
}


int main() {
    for (int var341 = 0; var341 < 18; var341++) {
        var341 += 2;
    }

    int var799 = 7;
    if (var799 % 2 == 0) {
        printf("var799 is even\n");
    } else {
        printf("var799 is odd\n");
    }

    return 0;
}
