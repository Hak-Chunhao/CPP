#include <iostream>
#include <string>
using namespace std;
class Printer
{
  string _name;
  int _availablePaper;

public:
  Printer(string name, int paper)
  {
    _name = name;
    _availablePaper = paper;
  }
  void Print(string txtDoc)
  {
    int requiredPaper = txtDoc.length() / 10;
    if (requiredPaper > _availablePaper)
    {
      // throw "No Paper";
      throw 101;
      return;
    }
    cout << "Printing..." << txtDoc << endl;
    _availablePaper -= requiredPaper;
  }
};

int main()
{
  Printer myPrinter("HP Deskjet 1234", 10);
  try
  {
    myPrinter.Print("Hello, my name is Hak Chunhao. I am a kick air");
    myPrinter.Print("Hello, my name is Hak Chunhao. I am a kick air");
    myPrinter.Print("Hello, my name is Hak Chunhao. I am a kick air");
  }
  catch (const char *txtException)
  {
    cout << "Exception: " << txtException << endl;
  }
  catch (int exCode)
  {
    cout << "Exception: " << exCode << endl;
  }
  catch (...) /* this is default handler */
  {
    cout << "Exception happend!" << endl;
  }
  system("pause>0");
  //   system ("pause>nul");
  return 0;
}