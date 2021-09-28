// Hari Kumar
// 002352411
// hkumar@chapman.edu
// CPSC350-02
// Assignment 1

//Implementation of Model CLass to establish rules of Tutnese language

#ifndef MODEL_H
#define MODEL_H

#include <string>

using namespace std;

class Model
{
  public:
    Model();
    ~Model();
    string translateSingleCharacter(char singleInputChar);
    string translateDoubleCharacter(char doubleInputChar);
    string translateSingleCharacterTut(string singleStrTut);
  private:
    bool isVowel(char doubleInputChar);
};

#endif
