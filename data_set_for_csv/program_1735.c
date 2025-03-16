
#include <stdio.h>


int func30(int var859) {
    if (var859 <= 0) return 1;
    return func30(var859 - 1);
}


int main() {
    int var230 = 0;
    while (var230 < 15) {
        var230 += 1;
        var230++;
    }

    int var922 = 78;
    if (var922 % 2 == 0) {
        printf("var922 is even\n");
    } else {
        printf("var922 is odd\n");
    }

    return 0;
}
