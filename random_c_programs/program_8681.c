
#include <stdio.h>


int func756(int var544) {
    if (var544 <= 0) return 1;
    return func756(var544 - 1);
}


int main() {
    for (int var339 = 0; var339 < 8; var339++) {
        var339 += 5;
    }

    int var917 = 39;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}
