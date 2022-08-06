#include <iostream>
#include <fstream>
using namespace std;

int
main ()
{
  fstream myFile;
  myFile.open ("hao.txt", ios::out);	// write

  if (myFile.is_open ())
    {
      myFile << "hello from write\n";
      myFile << "this is second line\n";
      myFile.close ();
    }

  myFile.open ("hao.txt", ios::app);	// append

  if (myFile.is_open ())
    {
      myFile << "hello from append\n";
      myFile << "this is second line\n";
      myFile.close ();
    }

  myFile.open ("hao.txt", ios::in);	// read

  if (myFile.is_open ())
    {
      string line;
      while (getline (myFile, line))
	{
	  cout << line << endl;
	}
      myFile.close ();
    }

  system ("pause>0");
  return 0;
}

