/******************************************************************************
  Title          : main.cpp
  Author         : Shadow12ac
  Created on     : October  7, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : ./oddities oddities.txt
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  :
  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be 
  named 
       username_oddity
   where username is the GitHub username of its author.
  For example, 
      output_function  stewartweiss_oddity;
   Oddities are found in the file "oddities.txt" in the project source directory
 
******************************************************************************/
 #include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <cstdio>
 #include <cstring>
 #include <sstream>


  using namespace std;
 /******************************************************************************/
 // The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) ( ostream & out);
 /******************************************************************************
        
                        All Function Definitions
 ******************************************************************************/
//typedef ostream& (*output_function) (const ostream & out);

ostream& starting_oddity( ostream & out);
ostream& FrancisXIrizarry_oddity(ostream & out);
ostream& anupamdas104_oddity(ostream & out){
	out << "Why is it that when you're driving and looking for an address, you turn down the volume on the radio?  \n";
	return out;
}
ostream& lashana29_oddity(ostream & out);


int main(int argc, char* argv[] )
{
  starting_oddity(cout);
  
	output_function FrancisXIrizarry;
   	FrancisXIrizarry = FrancisXIrizarry_oddity;
        FrancisXIrizarry(cout);
  
 anupamdas104_oddity(cout); 
	lashana29_oddity(cout);
        return 0;


} 

ostream& starting_oddity(ostream & out){
	out << "This is a collection of strange but true facts." << endl;
	
	return out;
}

ostream& FrancisXIrizarry_oddity(ostream & out){
    out << "Why do we drive on parkways and park on driveways?" << endl;
	
   return out;
}

ostream& lashana29_oddity(ostream& out) {
	out << "Why do they put Braille dots on the keypad of the drive-up ATM?" << endl;
	return out;
}
