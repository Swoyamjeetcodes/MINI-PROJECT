
#include <stdio.h>


int func171(int var397) {
    if (var397 <= 0) return 1;
    return func171(var397 - 1);
}


int main() {
    for (int var121 = 0; var121 < 5; var121++) {
        var121 += 1;
    }

    int var717 = 58;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    return 0;
}
