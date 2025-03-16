
#include <stdio.h>


int func881(int var391) {
    if (var391 <= 0) return 1;
    return func881(var391 - 1);
}

int func679(int var957) {
    if (var957 <= 0) return 1;
    return 75;
}

int func520(int var922) {
    if (var922 <= 0) return 1;
    return 90;
}


int main() {
    int var975 = 0;
    while (var975 < 14) {
        var975 += 4;
        var975++;
    }    int var200 = 0;
    while (var200 < 20) {
        var200 += 5;
        var200++;
    }    for (int var891 = 0; var891 < 14; var891++) {
        var891 += 5;
    }

    int var577 = 64;
    if (var577 % 2 == 0) {
        printf("var577 is even\n");
    } else {
        printf("var577 is odd\n");
    }

    return 0;
}
