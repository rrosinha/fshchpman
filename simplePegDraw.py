# simplepegdraw.py
""" Draw fishing pegs based on a given number of fishermen. 

    Author: Ricardo Rosinha
"""

import sys
import random

def number_of_fishers():
    """ Prompt the user for the number of fishermen entering the draw."""
    try:
        number = int(input("How many fishermen will enter the competition: "))
        return number
    except ValueError:
        print("Please enter an integer for the number of competing fishermen")
    

def draw_and_print():
    """ Draw and print the pegs for a given number of fishermen. """
    fnumber = number_of_fishers()
    pegs = [i for i in range(1, fnumber+1)]
    print(pegs)
    random.shuffle(pegs)
    print(pegs)



if __name__ == "__main__":
    draw_and_print()