# fileIOLabF25

Read each line from a csv file
Each line will break the data into variables
Numbers ints, text is a string
Add the two ints together 
Print the string as many times as the sum
Do this for each line

# Algorithm

int main

ifstream inFile
string currentLine
stringstream converter
stringstream ss
int counter
string sCounter
int counterTwo
string sCounterTwo
string text

open data.csv file
while loop(getline(inFile, currentLine)
    clear the stringstreams
    
    load variables into the ss stream

    read counter as a string
    separate the variables with commas
    clear converter
    convert to an int

    read second counter as a string
    separate the variables with commas 
    clear converter
    convert to an int

    int sum = counter + secondcounter
    
    read the rest as text

    build a for loop for total times
        print the string
    add a endline    
    
close data.csv file
