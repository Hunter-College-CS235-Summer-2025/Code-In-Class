# include <iostream>

using namespace std;

bool nestedParens(std::string word) {
  if (word.empty()) {
    return true;
  }
  return word[0] == '(' && word[word.size()-1] == ')' && nestedParens(word.substr(1,word.size()-2));
}

int main() {
  cout << nestedParens("((()))") << endl;      // true (1)
  cout << nestedParens("()") << endl;          // true (1)
  cout << nestedParens("") << endl;            // true (1)

  cout << nestedParens("(((") << endl;         // false (0)
  cout << nestedParens("(()") << endl;         // false (0)
  cout << nestedParens(")(") << endl;          // false (0)
  cout << nestedParens("a(b)c") << endl;       // false (0)
}
