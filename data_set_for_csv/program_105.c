
#include <stdio.h>


int func811(int var308) {
    if (var308 <= 0) return 1;
    return func811(var308 - 1);
}


int main() {
    for (int var101 = 0; var101 < 5; var101++) {
        var101 += 1;
    }

    int var293 = 29;
    if (var293 % 2 == 0) {
        printf("var293 is even\n");
    } else {
        printf("var293 is odd\n");
    }

    return 0;
}
