#include <cstdlib>
#include <iostream>

using namespace std;
namespace IBM{
  namespace Taiwan {           // �l�R�W�Ŷ� Taiwan
      class Notebook {

      };
 }
  namespace Japan {            // �l�R�W�Ŷ� Japan
      class Notebook {

      };
  }
}

namespace Compaq{
  class Notebook {

  };
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
  IBM::Taiwan::Notebook A ;
  IBM::Japan::Notebook B ;
  Compaq::Notebook C ; 
  system("PAUSE");

  return 0;
}
