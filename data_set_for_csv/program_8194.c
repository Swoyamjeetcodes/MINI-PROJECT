
#include <stdio.h>


int func121(int var562) {
    if (var562 <= 0) return 1;
    return func121(var562 - 1);
}


int main() {
    for (int var171 = 0; var171 < 10; var171++) {
        var171 += 4;
    }    int var115 = 0;
    while (var115 < 17) {
        var115 += 1;
        var115++;
    }

    int var209 = 18;
    if (var209 % 2 == 0) {
        printf("var209 is even\n");
    } else {
        printf("var209 is odd\n");
    }

    int var40 = 43;
    if (var40 % 2 == 0) {
        printf("var40 is even\n");
    } else {
        printf("var40 is odd\n");
    }

    return 0;
}
