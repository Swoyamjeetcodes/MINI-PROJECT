
#include <stdio.h>


int func107(int var890) {
    if (var890 <= 0) return 1;
    return func107(var890 - 1);
}


int main() {
    int var650 = 0;
    while (var650 < 19) {
        var650 += 1;
        var650++;
    }

    int var377 = 36;
    if (var377 % 2 == 0) {
        printf("var377 is even\n");
    } else {
        printf("var377 is odd\n");
    }

    return 0;
}
