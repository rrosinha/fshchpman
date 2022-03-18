// Fisherman class declaration
// This a competition fisherman that will participate in a fishing match
#include <string>
#include <string_view>

#pragma once


class Fisherman
{
    public:
        //Constructor
        Fisherman(int fId, std::string fName);
        
        //Setters
        void setFishingPeg(int fPeg);
        void setFishedWeight(int fWeight);
        void setScore(double fScore);
        
        //Getters
        int getFId() const;
        const std::string& getFName() const;
        int getFPeg() const;
        int getFWeight() const;
        double getFScore() const;

    private:
        int id{0};
        std::string name;
        int fishingPeg{0};
        int fishedWeightGrams{0.0};
        double score{0.0};
        
};