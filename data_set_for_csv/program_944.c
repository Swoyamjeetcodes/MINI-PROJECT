
#include <stdio.h>


int func554(int var835) {
    if (var835 <= 0) return 1;
    return func554(var835 - 1);
}

int func561(int var182) {
    if (var182 <= 0) return 1;
    return func561(var182 - 1);
}


int main() {
    for (int var943 = 0; var943 < 10; var943++) {
        var943 += 1;
    }    int var315 = 0;
    while (var315 < 11) {
        var315 += 3;
        var315++;
    }

    int var229 = 94;
    if (var229 % 2 == 0) {
        printf("var229 is even\n");
    } else {
        printf("var229 is odd\n");
    }

    return 0;
}
