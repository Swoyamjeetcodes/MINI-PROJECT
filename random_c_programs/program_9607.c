
#include <stdio.h>


int func1000(int var971) {
    if (var971 <= 0) return 1;
    return func1000(var971 - 1);
}


int main() {
    int var890 = 0;
    while (var890 < 8) {
        var890 += 4;
        var890++;
    }

    int var495 = 31;
    if (var495 % 2 == 0) {
        printf("var495 is even\n");
    } else {
        printf("var495 is odd\n");
    }

    return 0;
}
