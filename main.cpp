#include <iostream>

int main() {

    int fitnessClub[3];
    int grillBar[2];
    int officeBuilding[50];
    int house[15];
    int cottage[2];

    float averageFloors = 0.0f;

    averageFloors += sizeof (fitnessClub) / sizeof (fitnessClub[0]);
    averageFloors += sizeof (grillBar) / sizeof (grillBar[0]);
    averageFloors += sizeof (officeBuilding) / sizeof (officeBuilding[0]);
    averageFloors += sizeof (house) / sizeof (house[0]);
    averageFloors += sizeof (cottage) / sizeof (cottage[0]);

    averageFloors /= 5;

    std::cout << "Average floor count in your district is " << averageFloors << "\n";

    return 0;
}
