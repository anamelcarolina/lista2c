#include <stdio.h>
#include <string.h>

struct Player {
    char name[31];
    char position;
    int forceLevel;
};

struct Team {
    char teamName[31];
    struct Player players[11];
};

int main() {
    struct Team teams[2];
    double teamOneForce = 0.0;
    double teamTwoForce = 0.0;

    for (int i = 0; i < 2; i++) {
        scanf(" %30[^\n]", teams[i].teamName);

        for (int j = 0; j < 11; j++) {
            scanf(" %30[^;];%c;%d", teams[i].players[j].name, &teams[i].players[j].position, &teams[i].players[j].forceLevel);
        }
        getchar();
    }

    teamOneForce = (8*teams[0].players[0].forceLevel + 10 * (teams[0].players[1].forceLevel + teams[0].players[4].forceLevel) + 5 * (teams[0].players[2].forceLevel + teams[0].players[3].forceLevel) + 8 * (teams[0].players[5].forceLevel + teams[0].players[6].forceLevel) + 11 * (teams[0].players[7].forceLevel + teams[0].players[8].forceLevel) + 12 * (teams[0].players[9].forceLevel + teams[0].players[10].forceLevel)) / 100.0;
    teamTwoForce = (8*teams[1].players[0].forceLevel + 10 * (teams[1].players[1].forceLevel + teams[1].players[4].forceLevel) + 5 * (teams[1].players[2].forceLevel + teams[1].players[3].forceLevel) + 8 * (teams[1].players[5].forceLevel + teams[1].players[6].forceLevel) + 11 * (teams[1].players[7].forceLevel + teams[1].players[8].forceLevel) + 12 * (teams[1].players[9].forceLevel + teams[1].players[10].forceLevel)) / 100.0;

    printf("%s: %.2f de forca\n", teams[0].teamName, teamOneForce);
    printf("%s: %.2f de forca\n", teams[1].teamName, teamTwoForce);
    if (teamOneForce >= teamTwoForce){
        printf("%s eh mais forte\n", teams[0].teamName);
    } else {
        printf("%s eh mais forte\n", teams[1].teamName);
    }
    return 0;
}
