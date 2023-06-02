#include "mbed.h"

BusOut ledrow1(p30, p29, p28);
BusOut ledrow2(p27, p22, p21);
BusOut ledrow3(p20, p18, p17);

float pinkPantherled[]{

};

float harryPotterled[] = {
    0b000, 0b000, 0b100, 0b010, 0b001, 0b010, 0b100, 0b001, 0b100, 0b010, 0b001,
    0b100, 0b010, 0b100, 0b001, 0b010, 0b001, 0b100, 0b010, 0b100, 0b010, 0b100,
    0b001, 0b100, 0b010, 0b100, 0b001, 0b100, 0b010, 0b100, 0b100, 0b001, 0b010,
    0b100, 0b001, 0b010, 0b100, 0b010, 0b100, 0b001, 0b100, 0b010, 0b100, 0b001,
    0b001, 0b010, 0b100, 0b000, 0b010, 0b100, 0b001, 0b100, 0b010, 0b100, 0b001,
    0b100, 0b010, 0b010, 0b100, 0b001, 0b100, 0b010, 0b100
};

float furEliseled[]{

};

void songChoice(int beatmap, int i)
{
    switch(beatmap)
    {
        case 1:
            ledrow1 = pinkPantherled[i/2 + 2];
            ledrow2 = pinkPantherled[i/2 + 1];
            ledrow3 = pinkPantherled[i/2];
            break;
        case 2:
            ledrow1 = harryPotterled[i/2 + 2];
            ledrow2 = harryPotterled[i/2 + 1];
            ledrow3 = harryPotterled[i/2];
            break;
        case 3:
            ledrow1 = furEliseled[i/2 + 2];
            ledrow2 = furEliseled[i/2 + 1];
            ledrow3 = furEliseled[i/2];
            break;
        default:
            break; 
    }
}

void defaultled()
{
    ledrow1 = 0b000;
    ledrow2 = 0b000;
    ledrow3 = 0b000;
}