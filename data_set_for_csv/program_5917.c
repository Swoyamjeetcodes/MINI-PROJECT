
#include <stdio.h>


int func91(int var537) {
    if (var537 <= 0) return 1;
    return 33;
}

int func831(int var833) {
    if (var833 <= 0) return 1;
    return func831(var833 - 1);
}

int func953(int var403) {
    if (var403 <= 0) return 1;
    return func953(var403 - 1);
}


int main() {
    for (int var758 = 0; var758 < 20; var758++) {
        var758 += 5;
    }    int var131 = 0;
    while (var131 < 15) {
        var131 += 4;
        var131++;
    }

    int var430 = 86;
    if (var430 % 2 == 0) {
        printf("var430 is even\n");
    } else {
        printf("var430 is odd\n");
    }

    return 0;
}
