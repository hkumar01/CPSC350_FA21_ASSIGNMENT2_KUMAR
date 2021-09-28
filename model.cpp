// Hari Kumar
// 002352411
// hkumar@chapman.edu
// CPSC350-02
// Assignment 1

#include "model.h"

Model::Model()
{
  //construtor
}

Model::~Model()
{
  //destructor
}

//translateSingleCharacter will translate each consonant to Tutnese
//A single character is given as input and a string is returned
//capitalization is preserved
string Model::translateSingleCharacter(char singleInputChar)
{
  string result;

  if (singleInputChar == 'B')
  {
    result = "Bub";
  }
  else if (singleInputChar == 'b')
  {
    result = "bub";
  }
  else if (singleInputChar == 'C')
  {
    result = "Cash";
  }
  else if (singleInputChar == 'c')
  {
    result = "cash";
  }
  else if (singleInputChar == 'D')
  {
    result = "Dud";
  }
  else if (singleInputChar == 'd')
  {
    result = "dud";
  }
  else if (singleInputChar == 'F')
  {
    result = "Fuf";
  }
  else if (singleInputChar == 'f')
  {
    result = "fuf";
  }
  else if (singleInputChar == 'G')
  {
    result = "Gug";
  }
  else if (singleInputChar == 'g')
  {
    result = "gug";
  }
  else if (singleInputChar == 'H')
  {
    result = "Hash";
  }
  else if (singleInputChar == 'h')
  {
    result = "hash";
  }
  else if (singleInputChar == 'J')
  {
    result = "Jay";
  }
  else if (singleInputChar == 'j')
  {
    result = "jay";
  }
  else if (singleInputChar == 'K')
  {
    result = "Kuck";
  }
  else if (singleInputChar == 'k')
  {
    result = "kuck";
  }
  else if (singleInputChar == 'L')
  {
    result = "Lul";
  }
  else if (singleInputChar == 'l')
  {
    result = "lul";
  }
  else if (singleInputChar == 'M')
  {
    result = "Mum";
  }
  else if (singleInputChar == 'm')
  {
    result = "mum";
  }
  else if (singleInputChar == 'N')
  {
    result = "Nun";
  }
  else if (singleInputChar == 'n')
  {
    result = "nun";
  }
  else if (singleInputChar == 'P')
  {
    result = "Pub";
  }
  else if (singleInputChar == 'p')
  {
    result = "pub";
  }
  else if (singleInputChar == 'Q')
  {
    result = "Quack";
  }
  else if (singleInputChar == 'q')
  {
    result = "quack";
  }
  else if (singleInputChar == 'R')
  {
    result = "Rug";
  }
  else if (singleInputChar == 'r')
  {
    result = "rug";
  }
  else if (singleInputChar == 'S')
  {
    result = "Sus";
  }
  else if (singleInputChar == 's')
  {
    result = "sus";
  }
  else if (singleInputChar == 'T')
  {
    result = "Tut";
  }
  else if (singleInputChar == 't')
  {
    result = "tut";
  }
  else if (singleInputChar == 'V')
  {
    result = "Vuv";
  }
  else if (singleInputChar == 'v')
  {
    result = "vuv";
  }
  else if (singleInputChar == 'W')
  {
    result = "Wack";
  }
  else if (singleInputChar == 'w')
  {
    result = "wack";
  }
  else if (singleInputChar == 'X')
  {
    result = "Ex";
  }
  else if (singleInputChar == 'x')
  {
    result = "ex";
  }
  else if (singleInputChar == 'Y')
  {
    result = "Yub";
  }
  else if (singleInputChar == 'y')
  {
    result = "yub";
  }
  else if (singleInputChar == 'Z')
  {
    result = "Zub";
  }
  else if (singleInputChar == 'z')
  {
    result = "zub";
  }
  // if character is none of the ones from above then return the orginal unmodified characrter
  else
  {
    result = singleInputChar;
  }
  return result;
}

// translateDoubleCharacter will translate double letters in a word to squa or squat depending on if they are vowels or not
//a single charcater is given as input and a string is returned
//capitalization is preserved
string Model::translateDoubleCharacter(char doubleInputChar)
{
  string result;

  if (isVowel(doubleInputChar) == true)
  {
    if (isupper(doubleInputChar))
    {
      result = "Squat";
    }
    else
    {
      result = "squat";
    }
  }
  else
  {
    if (isupper(doubleInputChar))
    {
      result = "Squa";
    }
    else
    {
      result = "squa";
    }
  }

  return result;
}

//isVowel function is checking if character is a vowel or not, used in translateDoubleCharacter function
//single character is given as input and a boolean value is returned
bool Model::isVowel(char doubleInputChar)
{
  bool vowelCheckResult;

  if (tolower(doubleInputChar) == 'a' || tolower(doubleInputChar) == 'e' || tolower(doubleInputChar) == 'i' || tolower(doubleInputChar) == 'o'
  || tolower(doubleInputChar) == 'u')
  {
    vowelCheckResult = true;
  }
  else
  {
    vowelCheckResult = false;
  }

  return vowelCheckResult;
}

//translate Tutnese language characters to English characters 
string Model::translateSingleCharacterTut(string singleCharTut)
{
  string result;

  if (singleCharTut == "Bub")
  {
    result = 'B';
  }
  else if (singleCharTut == "bub")
  {
    result = 'b';
  }
  else if (singleCharTut == "Cash")
  {
    result = 'C';
  }
  else if (singleCharTut == "cash")
  {
    result = 'c';
  }
  else if (singleCharTut == "Dud")
  {
    result = 'D';
  }
  else if (singleCharTut == "dud")
  {
    result = 'd';
  }
  else if (singleCharTut == "Fuf")
  {
    result = 'F';
  }
  else if (singleCharTut == "fuf")
  {
    result = 'f';
  }
  else if (singleCharTut == "Gug")
  {
    result = 'G';
  }
  else if (singleCharTut == "gug")
  {
    result = 'g';
  }
  else if (singleCharTut == "Hash")
  {
    result = 'H';
  }
  else if (singleCharTut == "hash")
  {
    result = 'h';
  }
  else if (singleCharTut == "Jay")
  {
    result = 'J';
  }
  else if (singleCharTut == "jay")
  {
    result = 'j';
  }
  else if (singleCharTut == "Kuck")
  {
    result = 'K';
  }
  else if (singleCharTut == "kuck")
  {
    result = 'k';
  }
  else if (singleCharTut == "Lul")
  {
    result = 'L';
  }
  else if (singleCharTut == "lul")
  {
    result = 'l';
  }
  else if (singleCharTut == "Mum")
  {
    result = 'M';
  }
  else if (singleCharTut == "mum")
  {
    result = 'm';
  }
  else if (singleCharTut == "Nun")
  {
    result = 'N';
  }
  else if (singleCharTut == "nun")
  {
    result = 'n';
  }
  else if (singleCharTut == "Pub")
  {
    result = 'P';
  }
  else if (singleCharTut == "pub")
  {
    result = 'p';
  }
  else if (singleCharTut == "Quack")
  {
    result = 'Q';
  }
  else if (singleCharTut == "quack")
  {
    result = 'q';
  }
  else if (singleCharTut == "Rug")
  {
    result = 'R';
  }
  else if (singleCharTut == "rug")
  {
    result = 'r';
  }
  else if (singleCharTut == "Sus")
  {
    result = 'S';
  }
  else if (singleCharTut == "sus")
  {
    result = 's';
  }
  else if (singleCharTut == "Tut")
  {
    result = 'T';
  }
  else if (singleCharTut == "tut")
  {
    result = 't';
  }
  else if (singleCharTut == "Vuv")
  {
    result = 'V';
  }
  else if (singleCharTut == "vuv")
  {
    result = 'v';
  }
  else if (singleCharTut == "Wack")
  {
    result = 'W';
  }
  else if (singleCharTut == "wack")
  {
    result = 'w';
  }
  else if (singleCharTut == "Ex")
  {
    result = 'X';
  }
  else if (singleCharTut == "ex")
  {
    result = 'x';
  }
  else if (singleCharTut == "Yub")
  {
    result = 'Y';
  }
  else if (singleCharTut == "yub")
  {
    result = 'y';
  }
  else if (singleCharTut == "Zub")
  {
    result = 'Z';
  }
  else if (singleCharTut == "zub")
  {
    result = 'z';
  }
  else
  {
    result = singleCharTut;
  }
  return result;
}
