#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;
	std::stringstream ss;
	int counter;
	std::string sCounter;
	int counterTwo;
	std::string sCounterTwo;
	std::string text;

	inFile.open("data.csv");

	while (getline(inFile, currentLine)){
		//clear current strings
		ss.clear();
		ss.str("");
		converter.clear();
		converter.str("");

		ss.str(currentLine);
			
		//getting the integers and text
		getline(ss, sCounter, ',');
		getline(ss, sCounterTwo, ',');
		getline(ss, text);
		
		//clear converter 
		converter.clear();
		converter.str("");
		//convert counter
		converter << sCounter;
		converter >> counter;
		
		//clear converter
		converter.clear();
		converter.str("");
		//convert counterTwo
		converter << sCounterTwo;
		converter >> counterTwo;
		
		//add two counters
		int sum = counter + counterTwo;
		
		for(int i=0; i < sum; i++){
			std::cout << text << " ";
		}//end for
		std::cout << std::endl;	

	}//end while	
	
	inFile.close();

	return 0;
}//end main
