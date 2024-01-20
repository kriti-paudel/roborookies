#include <iostream>
#include <string>

using namespace std;

bool contains_u(const string& input) { // Using bool for clarity
  for (char c : input) {
    if (c == 'U') {
      return true;
    }
  }
  return false;
}

void shortest_path(string& input) { // Passing input by reference to modify it
  while (input.length() > 3 && contains_u(input)) { // Using Single while loop
    for (int i = 0; i < input.length() - 2; i++) { // Avoiding out-of-bounds access
      if (input[i] == 'S' && input[i + 1] == 'U' && input[i + 2] == 'R') {
        input.replace(i, 3, "L"); // Using replace for efficient replacement
        break;
      } else if (input[i] == 'R' && input[i + 1] == 'U' && input[i + 2] == 'R') {
        input.replace(i, 3, "S");
        break;
      }
    }
  }
  cout << input << endl; // Adding endl for proper output formatting
}

int main() {
  string input = "SRURSUR";
  shortest_path(input);
  return 0;
}

