
#include <stdio.h>


int func44(int var981) {
    if (var981 <= 0) return 1;
    return func44(var981 - 1);
}


int main() {
    for (int var840 = 0; var840 < 15; var840++) {
        var840 += 5;
    }

    int var56 = 56;
    if (var56 % 2 == 0) {
        printf("var56 is even\n");
    } else {
        printf("var56 is odd\n");
    }

    return 0;
}
