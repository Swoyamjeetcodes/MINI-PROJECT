
#include <stdio.h>


int func261(int var300) {
    if (var300 <= 0) return 1;
    return func261(var300 - 1);
}

int func373(int var852) {
    if (var852 <= 0) return 1;
    return func373(var852 - 1);
}

int func825(int var889) {
    if (var889 <= 0) return 1;
    return 91;
}


int main() {
    for (int var472 = 0; var472 < 15; var472++) {
        var472 += 5;
    }    int var646 = 0;
    while (var646 < 19) {
        var646 += 5;
        var646++;
    }    int var331 = 0;
    while (var331 < 19) {
        var331 += 5;
        var331++;
    }

    int var652 = 56;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    return 0;
}
