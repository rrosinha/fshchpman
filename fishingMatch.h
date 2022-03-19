// FishingMatch class declaration
//
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include "fisherman.h"

#pragma once

class FishingMatch
{
    public:


    private:
        std::string id{""}; // simple string to id the event
        std::string location{""}; // where is the fishing match taking place
        std::string date{""}; // for simplicity, consider as string
        std::vector<Fisherman> participants{}; // a collectios of fishermen that will participate in the match
        int numberOfParticipants{0};

};