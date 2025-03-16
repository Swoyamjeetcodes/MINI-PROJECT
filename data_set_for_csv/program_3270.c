
#include <stdio.h>


int func230(int var322) {
    if (var322 <= 0) return 1;
    return func230(var322 - 1);
}

int func101(int var946) {
    if (var946 <= 0) return 1;
    return func101(var946 - 1);
}


int main() {
    int var957 = 0;
    while (var957 < 13) {
        var957 += 3;
        var957++;
    }    int var711 = 0;
    while (var711 < 15) {
        var711 += 2;
        var711++;
    }

    int var683 = 51;
    if (var683 % 2 == 0) {
        printf("var683 is even\n");
    } else {
        printf("var683 is odd\n");
    }

    return 0;
}
