<div align = "center">

# OOPs Part 2

</div>

## 1. Create a class called Animal

<details>

### Problem Description

```
Create a class called "Animal" with the following method:

makeSound: a method that returns a string "Some generic animal sound"

Then, create two subclasses of Animal called "Dog" and "Cat" with the following methods:

makeSound: a method in the Dog class that returns a string "Bark"

makeSound: a method in the Cat class that returns a string "Meow"
```

**Example 1:**

```js
Input:
 ["Solution", "makeAnimalSound", "makeDogSound", "makeCatSound"]
 [[], [], [], []]Output: [null, "Some generic animal sound", "Bark", "Meow"]
```

**Solutions**

- <details>

    <summary>My Code</summary>

    <br>

  ```cpp
  class Solution {
  public:
      Solution() {

      }

      string makeAnimalSound() {
          return "Some generic animal sound";
      }

      string makeDogSound() {
          return "Bark";
      }

      string makeCatSound() {
          return "Meow";
      }
  }
  ```

    </details>

- <details>

    <summary>Editorial</summary>

    <br>

  ```cpp
    class Animal {
    public:
        // Method that returns a string "Some generic animal sound"
        string makeSound() {
            return "Some generic animal sound";
        }
    };

    class Dog : public Animal {
    public:
        // Overrides the makeSound method in the Animal class
        string makeSound() {
            return "Bark";
        }
    };

    class Cat : Animal {
    public:
        // Overrides the makeSound method in the Animal class
        string makeSound() {
            return "Meow";
        }
    };

    class Solution {
    public:
        Solution() {

        }

        string makeAnimalSound() {
            Animal animal;
            return animal.makeSound();
        }

        string makeDogSound() {
            Dog dog;
            return dog.makeSound();
        }

        string makeCatSound() {
            Cat cat;
            return cat.makeSound();
        }
    }
  ```

    </details>

</details>

</details>
