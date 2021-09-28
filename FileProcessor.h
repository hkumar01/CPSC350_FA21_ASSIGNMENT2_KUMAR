// Hari Kumar
// 002352411
// hkumar@chapman.edu
// CPSC350-02
// Assignment 1

//Implementation of FileProcessor class is to take a english text file and output a translated Tutnese text file

#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <iostream>
#include <fstream>
#include <string>
#include "Translator.h"

using namespace std;

class FileProcessor : public Translator
{
  public:
    FileProcessor();
    ~FileProcessor();
    void processFile(string inputFile, string outputFile);
    void processTutFile(string inputFile, string outputFile);
};

#endif
