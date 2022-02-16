// Fishing match manager
// Register a fishing match draw and results
#include <iostream>
#include <string>
#include <vector>
#include <random>

struct fisherman {
    std::string licenseID;
    std::string name;
    int age;
    int peg;
    double weight;
    double score;
    fisherman(std::string fname, int fage)
        : name{fname}, age{fage}
        {
            peg = 0;
            weight = 0.0;
            score = 0.0;
        }
};


struct fishingMatch {
    std::string place;
    std::vector<fisherman> partipants;
    int numberOfPartcipants;
    // constructor
    fishingMatch(std::string fmPlace, std::vector<fisherman> fmParticipants)
        :place{fmPlace}, partipants{fmParticipants}
        {

        }
    
    // draw and assign pegs to participationg fishermen
    void drawAndAssignPegs()
    {
        // sets final number of participants
    }

    void addParticipant(fisherman fisher)
    {
        // add fisherman to the participants vector
        partipants.push_back(fisher); 
    }

    void setWeight(std::string name, double fweight)
    {
        //sets the weight for a fisherman
    }

    void calculateResults()
    {
        // calculate results based on the weight fished by each participant
    }

    void printParticipants()
    {
        // display a simple list of participants (name and age)
    }

    void printPegDraw()
    {
        // print participants after pegs being assigned
    }


};


int main()
{
    

    return 0;
}