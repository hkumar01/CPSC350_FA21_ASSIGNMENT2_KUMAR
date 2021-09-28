// Hari Kumar
// 002352411
// hkumar@chapman.edu
// CPSC350-02
// Assignment 1

#include "FileProcessor.h"

FileProcessor::FileProcessor()
{
  //constructor
}

FileProcessor::~FileProcessor()
{
  //destructor
}

// FileProcessor class will take an english text file as input and output a translated Tutnese text file
// the function takes to strings as parameters and has no return value
void FileProcessor::processFile(string inputFile, string outputFile)
{
  ifstream inputFileStream;
  ofstream outputFileStream;
  string sentenceFromText;
  string outputSentence;

//open both input and output files
  inputFileStream.open(inputFile);
  outputFileStream.open(outputFile);

  //check to see if both files are open, if not then throw error and exit program

  if (!inputFileStream.is_open())
  {
    cout << "Cannot open file. Exiting." << endl;
    exit(EXIT_FAILURE);
  }

  if (!outputFileStream.is_open())
  {
    cout << "Cannot open file. Exiting." << endl;
    exit(EXIT_FAILURE);
  }

//loop until end of input file
  while (!inputFileStream.eof())
  {
    //grab each sentence from input file. grabbing all words until a period is reached
    //translate each sentence and append a period and space at the end.
    //write the translated sentence to the output file
    getline(inputFileStream, sentenceFromText, '.');
    outputSentence = translateEnglishSentence(sentenceFromText) + ". " + '\n';
    outputFileStream << outputSentence;
  }

//close both files
  inputFileStream.close();
  outputFileStream.close();
}

//same logic as processFile method but for translating Tutnese input file to English output file 
void FileProcessor::processTutFile(string inputFile, string outputFile)
{
  ifstream inputFileStream;
  ofstream outputFileStream;
  string sentenceFromText;
  string outputSentence;

  inputFileStream.open(inputFile);
  outputFileStream.open(outputFile);

  if (!inputFileStream.is_open())
  {
    cout << "Cannot open file. Exiting." << endl;
    exit(EXIT_FAILURE);
  }

  if (!outputFileStream.is_open())
  {
    cout << "Cannot open file. Exiting." << endl;
    exit(EXIT_FAILURE);
  }

  while (!inputFileStream.eof())
  {
    getline(inputFileStream, sentenceFromText, '.');
    outputSentence = translateTutSentence(sentenceFromText) + ". " + '\n';
    outputFileStream << outputSentence;
  }

  inputFileStream.close();
  outputFileStream.close();
}
