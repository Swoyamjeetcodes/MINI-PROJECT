
#include <stdio.h>


int func974(int var596) {
    if (var596 <= 0) return 1;
    return func974(var596 - 1);
}

int func560(int var901) {
    if (var901 <= 0) return 1;
    return func560(var901 - 1);
}

int func342(int var970) {
    if (var970 <= 0) return 1;
    return 92;
}

int func345(int var393) {
    if (var393 <= 0) return 1;
    return func345(var393 - 1);
}


int main() {
    int var205 = 0;
    while (var205 < 10) {
        var205 += 4;
        var205++;
    }

    int var425 = 58;
    if (var425 % 2 == 0) {
        printf("var425 is even\n");
    } else {
        printf("var425 is odd\n");
    }

    int var991 = 43;
    if (var991 % 2 == 0) {
        printf("var991 is even\n");
    } else {
        printf("var991 is odd\n");
    }

    return 0;
}
