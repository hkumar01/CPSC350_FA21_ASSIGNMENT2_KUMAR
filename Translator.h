// Hari Kumar
// 002352411
// hkumar@chapman.edu
// CPSC350-02
// Assignment 1

//Implementation of Translator class is to translate single English words and sentences to Tutnese

#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
#include <string>
#include <sstream>
#include "model.h"

using namespace std;

class Translator : public Model
{
  public:
    Translator();
    ~Translator();
    string translateEnglishWord(string inputStrWord);
    string translateEnglishSentence(string inputStrSent);
    string translateTutWord(string inputTutWord);
    string translateTutSentence(string inputTutSent);
};

#endif
