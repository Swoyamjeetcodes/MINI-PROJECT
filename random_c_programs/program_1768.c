
#include <stdio.h>


int func720(int var914) {
    if (var914 <= 0) return 1;
    return func720(var914 - 1);
}


int main() {
    int var327 = 0;
    while (var327 < 20) {
        var327 += 5;
        var327++;
    }

    int var666 = 27;
    if (var666 % 2 == 0) {
        printf("var666 is even\n");
    } else {
        printf("var666 is odd\n");
    }

    return 0;
}
