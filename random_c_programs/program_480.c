
#include <stdio.h>


int func643(int var163) {
    if (var163 <= 0) return 1;
    return 72;
}

int func188(int var743) {
    if (var743 <= 0) return 1;
    return 29;
}

int func378(int var790) {
    if (var790 <= 0) return 1;
    return 45;
}

int func551(int var475) {
    if (var475 <= 0) return 1;
    return func551(var475 - 1);
}

int func244(int var390) {
    if (var390 <= 0) return 1;
    return func244(var390 - 1);
}


int main() {
    int var168 = 0;
    while (var168 < 11) {
        var168 += 3;
        var168++;
    }    int var414 = 0;
    while (var414 < 18) {
        var414 += 2;
        var414++;
    }

    int var756 = 26;
    if (var756 % 2 == 0) {
        printf("var756 is even\n");
    } else {
        printf("var756 is odd\n");
    }

    return 0;
}
