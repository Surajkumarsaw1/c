# Structure Initialization

```c
#include <stdio.h>

struct student{
    char name[40];
    int age;
};

int main() {
    struct student s1 = {"Suraj", 20};
    printf("Name %s\n",s1.name);
    printf("Age %d\n",s1.age);
    return 0;
}
```

> ⚠️ Order of initialization must be maintained.