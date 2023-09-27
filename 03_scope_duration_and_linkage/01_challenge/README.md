# Challenge 1

Consider the following code:

**temp_sensor.h**
```cpp
namespace Sensor {
    float readTemperature();
}
```

**temp_sensor.cpp**
```cpp
#include "temp_sensor.h"

float readTemperature() {
    return 25.5;
}
```

**main.cpp**
```cpp
#include <iostream>
#include "temp_sensor.h"

int main() {
    std::cout << "Temperature reading: " << readTemperature() << std::endl;
    return 0;
}
```

Compile and run this program. Fix the code that is causing this error. You should only be adding code to fix the code, not removing code.
