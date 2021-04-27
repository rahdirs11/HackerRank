#include <string>
#include <iostream>

using namespace std;

int main(){
  int n;
  string str{};
  cin >> n;
  if (!(n > 10 || n < 0)){
    while (n > 0){
      cin >> str;

      cout << (str.front() == 'a' && str.back() == 'a' && str.length() > 1? "Yes": "No") << endl;
      --n;
    }
  }
  return 0;
}
