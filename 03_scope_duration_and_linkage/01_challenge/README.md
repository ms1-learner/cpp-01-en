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

---

The issue in this code is related to namespace usage. The function `readTemperature()` is declared inside the `Sensor` namespace in `temp_sensor.h`, but it's defined in the global namespace in `temp_sensor.cpp`. Similarly, in `main.cpp`, it's used as if it's in the global namespace.

The correct code should be:

**temp_sensor.cpp**
```cpp
#include "temp_sensor.h"

namespace Sensor {
    float readTemperature() {
        return 25.5;
    }
}
```

**main.cpp**
```cpp
#include <iostream>
#include "temp_sensor.h"

int main() {
    std::cout << "Temperature reading: " << Sensor::readTemperature() << std::endl;
    return 0;
}
```

