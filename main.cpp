#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;

ll t, n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> t;
  auto c = 1;
  while (0 < (t--)) {
    cout << "Case #" << c << ": ";
    cin >> n;
    if (4500 < n) {
      cout << "Round 1\n";
    } else if (1000 < n) {
      cout << "Round 2\n";
    } else if (25 < n) {
      cout << "Round 3\n";
    } else {
      cout << "World Finals\n";
    }
    ++c;
  }

  return 0;
}