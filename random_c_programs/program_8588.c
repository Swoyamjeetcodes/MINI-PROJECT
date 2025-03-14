
#include <stdio.h>


int func410(int var397) {
    if (var397 <= 0) return 1;
    return func410(var397 - 1);
}


int main() {
    int var409 = 0;
    while (var409 < 10) {
        var409 += 2;
        var409++;
    }

    int var772 = 82;
    if (var772 % 2 == 0) {
        printf("var772 is even\n");
    } else {
        printf("var772 is odd\n");
    }

    return 0;
}
