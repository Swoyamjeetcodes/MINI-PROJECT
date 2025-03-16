
#include <stdio.h>


int func29(int var567) {
    if (var567 <= 0) return 1;
    return func29(var567 - 1);
}


int main() {
    int var4 = 0;
    while (var4 < 8) {
        var4 += 2;
        var4++;
    }

    int var711 = 37;
    if (var711 % 2 == 0) {
        printf("var711 is even\n");
    } else {
        printf("var711 is odd\n");
    }

    return 0;
}
