// Hari Kumar
// 002352411
// hkumar@chapman.edu
// CPSC350-02
// Assignment 1

#include <iostream>
#include <string>
#include <string.h>
#include "FileProcessor.h"
#include "model.h"
#include "Translator.h"

using namespace std;

int main(int argc, char** argv)
{
  //check to see if three arguments are provided, if not then exit program
  if (argc != 4)
  {
    cout << "Must enter two files and desired translation command." << endl;
    return -1;
  }
  else
  {
    if (strcmp(argv[3], "E2T") == 0)
    {
      FileProcessor *Eng2Tut = new FileProcessor();
      Eng2Tut->processFile(argv[1], argv[2]);
      delete Eng2Tut;
    }
    else if (strcmp(argv[3], "T2E") == 0)
    {
      FileProcessor *Tut2Eng = new FileProcessor();
      Tut2Eng->processTutFile(argv[1], argv[2]);
      delete Tut2Eng;
    }
    else
    {
      cout << "Invalid translation option." << endl;
      return -1;
    }
  }

  return 0;
}
