
#include <stdio.h>


int func268(int var592) {
    if (var592 <= 0) return 1;
    return func268(var592 - 1);
}


int main() {
    for (int var406 = 0; var406 < 6; var406++) {
        var406 += 1;
    }

    int var888 = 77;
    if (var888 % 2 == 0) {
        printf("var888 is even\n");
    } else {
        printf("var888 is odd\n");
    }

    return 0;
}
