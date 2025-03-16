
#include <stdio.h>


int func175(int var161) {
    if (var161 <= 0) return 1;
    return func175(var161 - 1);
}


int main() {
    for (int var910 = 0; var910 < 13; var910++) {
        var910 += 5;
    }

    int var552 = 11;
    if (var552 % 2 == 0) {
        printf("var552 is even\n");
    } else {
        printf("var552 is odd\n");
    }

    return 0;
}
