
#include <stdio.h>


int func238(int var341) {
    if (var341 <= 0) return 1;
    return func238(var341 - 1);
}


int main() {
    for (int var339 = 0; var339 < 17; var339++) {
        var339 += 4;
    }

    int var972 = 39;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    return 0;
}
