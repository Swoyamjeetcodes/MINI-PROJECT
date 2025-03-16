
#include <stdio.h>


int func261(int var543) {
    if (var543 <= 0) return 1;
    return func261(var543 - 1);
}

int func947(int var224) {
    if (var224 <= 0) return 1;
    return func947(var224 - 1);
}


int main() {
    int var246 = 0;
    while (var246 < 7) {
        var246 += 4;
        var246++;
    }

    int var345 = 81;
    if (var345 % 2 == 0) {
        printf("var345 is even\n");
    } else {
        printf("var345 is odd\n");
    }

    int var56 = 18;
    if (var56 % 2 == 0) {
        printf("var56 is even\n");
    } else {
        printf("var56 is odd\n");
    }

    return 0;
}
