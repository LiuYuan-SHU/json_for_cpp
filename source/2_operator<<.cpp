#include "utils.h"

#include <nlohmann/json.hpp>
#include <iostream>

using json = nlohmann::json;
using namespace std;

void print_without_format();
void print_with_format();

json j = {
    {"pi", 3.141},
    {"happy", true},
    {"name", "Niels"},
    {"nothing", nullptr},
    {"answer", {{"everything", 42}}},
    {"list", {1, 0, 2}},
    {"object", {{"currency", "USD"}, {"value", 42.99}}}
};

int main() {
  print_without_format();
  print_with_format();
}

void print_without_format() {
  EXAMPLE_PRE_FIX;

  cout << j << endl;

  EXAMPLE_POST_FIX;
}

void print_with_format() {
  EXAMPLE_PRE_FIX;

  cout << std::setw(4) << j << endl;
  cout << std::setw(1) << std::setfill('\t') << j << endl;

  EXAMPLE_POST_FIX;
}