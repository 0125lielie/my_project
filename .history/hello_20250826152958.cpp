#include <iostream>
#include <vector>
#include <string>

// 命名空间 (Namespace)
namespace MyUtils
{
    // 模板函数 (Template Function)
    template <typename T>
    void printVector(const std::vector<T> &vec)
    {
        std::cout << "Vector contents: ";
        for (const T &item : vec)
        {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
}

// 一个简单的类 (Class)
class Greeter
{
private:
    std::string greeting;

public:
    // 构造函数
    Greeter(std::string greet) : greeting(greet) {}

    // 成员函数
    void sayHello(const std::string &name)
    {
        // 使用 std::cout 输出
        std::cout << greeting << ", " << name << "!" << std::endl;
    }
};

int main()
{
    // 体验 C/C++ 核心插件的 IntelliSense
    // 1. 当你输入 greeter. 时，会自动弹出 sayHello 成员函数提示。
    // 2. 当你输入 sayHello( 时，会自动提示你需要一个 const std::string& name 参数。
    Greeter greeter("Hello");
    greeter.sayHello("VS Code");

    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // 体验代码导航
    // 3. 在下面的 printVector 上右键 -> "转到定义"，可以立刻跳转到上面的函数实现。
    MyUtils::printVector(numbers);

    // 体验 Better C++ Syntax
    // 4. 观察代码的颜色：
    //    - `namespace`, `template`, `typename`, `class` 等关键字有独特的颜色。
    //    - `MyUtils`, `Greeter` 等自定义类型有不同于普通变量的颜色。
    //    - `std`, `vector`, `string`, `cout` 等标准库组件颜色也更清晰。

    // 体验调试功能
    // 5. 在下面这行代码的行号左边单击，可以设置一个红点（断点）。
    // 6. 按 F5 启动调试，程序会在这行暂停，你可以查看变量 greeter 和 numbers 的当前值。
    int exit_code = 0;

    return exit_code;
}