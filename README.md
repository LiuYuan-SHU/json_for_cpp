# JSON for C++

> [github link](https://github.com/nlohmann/json)

## 效果展示

![json](./README.assets/json.gif)

## API

### [`operator>>(basic_json)`](https://json.nlohmann.me/api/operator_gtgt/)

> [例子](./source/1_operator>>.cpp)

如果想要直接从文件中读取一个 json 对象，需要使用`parse`函数：

```cpp
ifstream fin("example.json");
json j = json::parse(fin);
```

这部分会在`basic_json`中详细介绍。

### [`nlohmann::operator<<`](https://json.nlohmann.me/api/operator_ltlt/)

不管是打印到标准输出还是文件，都可以直接使用`operator<<`
