// Fisherman class implementation
// implement all the functionallity for the class declared in fisherman.h
#include <string>
#include <string_view>
#include "fisherman.h"

// constructor implementation
Fisherman::Fisherman(int fId, std::string fName)
    :id{fId}, name{fName}
    {}

// setter functions implementations
void Fisherman::setFishingPeg(int fPeg)
{
    fishingPeg = fPeg;
}

void Fisherman::setFishedWeight(int fWeight)
{
    fishedWeightGrams = fWeight;
}

void Fisherman::setScore(double fScore)
{
    score = fScore;
}

// getter functions implementations
int Fisherman::getFId() const
{
    return id;
}

const std::string& Fisherman::getFName() const
{
    return name;
}

int Fisherman::getFPeg() const
{
    return fishingPeg;
}

int Fisherman::getFWeight() const
{
    return fishedWeightGrams;
}

double Fisherman::getFScore() const
{
    return score;
}
