// https://www.urionlinejudge.com.br/judge/en/problems/view/1187

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {

  vector< vector<double> > v1;
  double n, total=0;
  string operation;

  cin >> operation;

  for (int i = 0; i < 12; i++) {
    vector<double> v;

    for (int j = 0; j < 12; j++) {
      cin >> n;
      v.push_back(n);
    }

    v1.push_back(v);
  }

  int counter1=1, counter2=11, count = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = counter1; j < counter2; j++) {
      total += v1[i][j];
      count++;
    }

    counter1++;
    counter2--;
  }

  if (operation == "S") cout << fixed << setprecision(1) << total << endl;
  else cout << fixed << setprecision(1) << total / count << endl;

  return 0;
}
