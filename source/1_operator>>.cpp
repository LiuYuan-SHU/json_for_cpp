#include "utils.h"

#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>
#include <sstream>

using std::ifstream;
using std::stringstream;
using std::cout;
using std::endl;
using json = nlohmann::json;

void test_1();

int main() {
  test_1();
}

void test_1() {
  EXAMPLE_PRE_FIX;
// 创建一个流，其中包含序列化的JSON
  std::stringstream ss;
  ss << R"({
        "number": 23,
        "string": "Hello, world!",
        "array": [1, 2, 3, 4, 5],
        "boolean": false,
        "null": null
    })";

  // 创建JSON对象并从流中读取序列化
  json j;
  ss >> j;

  // 输出JSON对象
  std::cout << std::setw(2) << j << endl;
  EXAMPLE_POST_FIX;
}
