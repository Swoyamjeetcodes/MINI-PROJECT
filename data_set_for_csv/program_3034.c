
#include <stdio.h>


int func336(int var768) {
    if (var768 <= 0) return 1;
    return func336(var768 - 1);
}

int func667(int var889) {
    if (var889 <= 0) return 1;
    return func667(var889 - 1);
}

int func66(int var825) {
    if (var825 <= 0) return 1;
    return func66(var825 - 1);
}

int func756(int var309) {
    if (var309 <= 0) return 1;
    return func756(var309 - 1);
}


int main() {
    int var268 = 0;
    while (var268 < 10) {
        var268 += 3;
        var268++;
    }    int var425 = 0;
    while (var425 < 8) {
        var425 += 1;
        var425++;
    }    for (int var659 = 0; var659 < 19; var659++) {
        var659 += 1;
    }

    int var56 = 73;
    if (var56 % 2 == 0) {
        printf("var56 is even\n");
    } else {
        printf("var56 is odd\n");
    }

    return 0;
}
