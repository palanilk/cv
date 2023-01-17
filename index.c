// write 2 table in c?
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int x = 0;
  int y = 0;
  int a = 0;
//  int y = 0; this  is the error btw you can't re declare variable
  int b = 0; //this is what you wanted i guess

  cin >> x;
  cin >> y;

  for(b = 1; b <= y; ++b){
    for(a = 1; a < x; ++a){
      cout << setw(2) << a * b << " ";
    }
    cout <<setw(2)<< b * x << endl;
  }
  return 0;
}



